#include <bits/stdc++.h>
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int64_t N, K;
	cin >> N >> K;
	vector<int64_t> A(N), B(N);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i) >> B.at(i);
	}
	
	int64_t ans = 0;
	for (int i = 30; i >= 0; i--) {
		int64_t tmpK = K;
		if ((K & (1 << i)) != 0) {
			tmpK = 0;
			for (int j = 30; j > i; j--) {
				tmpK = tmpK*2 + !!(K & (1 << j));
			}
			tmpK = tmpK*2;
			for (int j = i-1; j >= 0; j--) {
				tmpK = tmpK*2 + 1;
			}
		}
		int64_t sum = 0;
		for (int i = 0; i < N; i++) {
			if ((A.at(i) | tmpK) == tmpK) {
				sum = sum + B.at(i);
			}
		}
		ans = max(ans, sum);
	}
	cout << ans << endl;

}
