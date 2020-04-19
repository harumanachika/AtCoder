#include <bits/stdc++.h>
#define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N, Q;
	cin >> N >> Q;
	string s;
	cin >> s;
	vector<char> t(Q), d(Q);
	for (int i=0; i<Q; i++) {
		cin >> t.at(i) >> d.at(i);
	}
	
	// 各セルのゴーレム数の初期値は１。Q-1から0まで、最終的に両端に達するかを判断。
	//
	// Q回目の試行でS[-1]に達するには、その直前に、S[0]に居ることが必須。
	// ⇔　Q-i回目の試行の直前に、S[i]に居ることが必須。
	
	int LL, RR; LL = -1; RR = N;
	for (int i=Q-1; i>=0; i--) {
		if (t.at(i) == s.at(LL+1) && d.at(i) == 'L') LL = LL + 1;
		if (t.at(i) == s.at(RR-1) && d.at(i) == 'R') RR = RR - 1;
		if (LL != -1) {
			if (t.at(i) == s.at(LL) && d.at(i) == 'R') LL = LL - 1;
		}
		if (RR != N ) {
			if (t.at(i) == s.at(RR) && d.at(i) == 'L') RR = RR + 1;
		}
	}
	
	int ans;
	if (RR-LL-1 >= 0) ans = RR-LL-1;
	else ans = 0;
	cout << ans << endl;
}
