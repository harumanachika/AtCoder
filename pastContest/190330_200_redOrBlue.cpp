#include <bits/stdc++.h>
#define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	string s;
	cin >> s;
	int rcont, bcont;
	rcont = 0; bcont = 0;
	for (int i=0; i<N; i++) {
		
		if (s.at(i) == 'R') {
			rcont = rcont + 1;
		}
		else {
			bcont = bcont + 1;
		}
	}
	if (rcont > bcont) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	
}
