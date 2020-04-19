#include <bits/stdc++.h>
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin >> N;
	vector<int64_t> A(N);
	for(int i = 0; i < N; i++) {
		cin >> A.at(i);
	}
	int64_t counter = 0;

	sort(A.begin(), A.end());

	if(N % 2 == 0) {
		int n = N / 2;
		for(int i = 0; i < n-1; i++) {
			counter = counter + A.at(2*n-i-1) - A.at(i);
		}
		for(int i = 0; i < n-1; i++) {
			counter = counter + A.at(2*n-i-2) - A.at(i);
		}
		counter = counter + max(A.at(n-1)-A.at(n), A.at(2*n-1)-A.at(n-1));
		
	}
	else {
		int n = (N-1) / 2;
		for(int i = 0; i < n; i++) {
			counter = counter + A.at(2*n-i-0) - A.at(i);
		}
		for(int i = 0; i < n-1; i++) {
			counter = counter + A.at(2*n-i-1) - A.at(i);
		}
		counter = counter + max(A.at(n)-A.at(n-1), A.at(2*n)-A.at(n));
	}

	cout << counter << endl;

}
