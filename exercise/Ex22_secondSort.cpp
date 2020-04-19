#include <bits/stdc++.h>
#define int int64_t
using namespace std;
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
	vector<pair<int, int>> ba(N);
	for (int i=0; i<N; i++) {
		cin >> ba.at(i).second >> ba.at(i).first;
	}

	sort(ba.begin(), ba.end());

	for (int i=0; i<N; i++) {
		cout << ba.at(i).second << ' ' << ba.at(i).first << endl;
	}
	
}
