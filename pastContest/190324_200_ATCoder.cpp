#include <bits/stdc++.h>
#define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string S;
	cin >> S;
	
	int counter = 0; int Max = 0;
	// bool frag = false;
	
	for (int i=0; i < S.size(); i++) {
		if (S.at(i) == 'A'||S.at(i) == 'T'||S.at(i) == 'G'||S.at(i) == 'C') {
			counter = counter +1;
			if (counter > Max) {
				Max = counter;
			}
		}
		else {
			counter = 0;
		}
	}
	
	cout << Max << endl;

}
