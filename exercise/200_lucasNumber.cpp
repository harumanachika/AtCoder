#include <bits/stdc++.h>
#define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;
// " ", ' '

// プロトタイプ宣言
// int myfunc(int, vector<vector<int>>);

// グローバル変数

// 関数：

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N; cin >> N;
	vector<int> L(N+1);
	L.at(0) = 2; L.at(1) = 1;
	for (int i=2; i<=N; i++) {
		L.at(i) = L.at(i-1)+L.at(i-2);
	}

	cout << L.at(N) << endl;
	
}
