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
	
	// �e�Z���̃S�[�������̏����l�͂P�BQ-1����0�܂ŁA�ŏI�I�ɗ��[�ɒB���邩�𔻒f�B
	//
	// Q��ڂ̎��s��S[-1]�ɒB����ɂ́A���̒��O�ɁAS[0]�ɋ��邱�Ƃ��K�{�B
	// �́@Q-i��ڂ̎��s�̒��O�ɁAS[i]�ɋ��邱�Ƃ��K�{�B
	
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
