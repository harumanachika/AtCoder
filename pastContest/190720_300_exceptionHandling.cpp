#include <bits/stdc++.h>
#define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;

// グローバル変数


// 関数：


signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin >> N;
	vector<int> A(N), B(N);
	for (int i=0; i<N; i++) {
		cin >> A.at(i);
		B.at(i) = A.at(i);
	}
	
	sort(B.begin(), B.end());
	
	for (int i=0; i<N; i++) {
		if ( A[i] != B[N-1] ) {
			cout << B[N-1] << endl;
		}
		else {
			cout << B[N-2] << endl;
		}
			
	}
}
