#include <bits/stdc++.h>
//#define int int64_t
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
	
	vector<int> cont(N);
	for (int j=0; j<N; j++) {
		cont.at(j) = 1;
	}
	for (int i=0; i<Q; i++) {
		for (int j=0; j<N ;j++) {
			if (s.at(j) == t.at(i) && d.at(i) == 'L') {
				if ( j == 0 ) cont.at(j) = 0;
				else {
					cont.at(j-1) = cont.at(j-1) + cont.at(j);
					cont.at(j) = 0;
				}
			}
			else if (s.at(j) == t.at(i) && d.at(i) == 'R') {
				if ( j == N-1 ) cont.at(j) = 0;
				else {
					cont.at(j+1) = cont.at(j+1) + cont.at(j);
					cont.at(j) = 0;
				}
			}
		}
	}
	
	int all = 0;
	for (int j=0; j<N; j++) {
		all = all + cont.at(j);
	}
	
	cout << all << endl;
	
}
