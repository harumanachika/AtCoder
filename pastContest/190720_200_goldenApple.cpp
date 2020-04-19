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
	
	int N, D;
	cin >> N >> D;
	
	int counter = 1;
	while ( N-(2*D+1) > 0) {
		counter = counter + 1;
		N = N - (2*D+1);
	}
	
	cout << counter << endl;
}
