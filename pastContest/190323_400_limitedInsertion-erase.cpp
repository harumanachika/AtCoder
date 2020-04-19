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
	vector<int> B(N), ans(N);
	for (int i=0; i<N; i++) {
		cin >> B.at(i);
	}
	
	int counter = 0;
	bool found = false;
	int Max = N-1;
	
	START:
	int i = Max;
	while (i >= 0) {
		if (B.at(i) == i+1) {
			ans.at(counter) = B.at(i);
			counter = counter+1;
			found = true;
			break;
		}
		i = i-1;
	}
	if (found == false) {
		cout << -1 << endl;
		goto END;
	}
	else if(Max != 0) {
		Max = Max -1;
		B.erase(B.begin()+i);
		found = false;
		goto START;
	}
	
	reverse(ans.begin(), ans.end());
	for (int i=0; i<N; i++) {
		cout << ans.at(i) << endl;
	}
	
	END:	;
}
