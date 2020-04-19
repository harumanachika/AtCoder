#include <bits/stdc++.h>
// #define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, Q;
	cin >> N >> Q;
	string S;
	cin >> S;
	vector<int> l(Q), r(Q);
	for (int i=0; i<Q; i++) {
		cin >> l.at(i) >> r.at(i);
	}
	
	vector<int> chk(N+1);
	chk.at(0) = 0;
	for (int i=0; i<N-1; i++) {
		if (S.at(i) == 'A' && S.at(i+1) == 'C') chk.at(i+1) = chk.at(i) + 1;
		else chk.at(i+1) = chk.at(i);
	}
		
	for (int i=0; i<Q; i++) {
		cout << chk.at(r.at(i)-1) - chk.at(l.at(i)-1) << endl;
	}
		
}
