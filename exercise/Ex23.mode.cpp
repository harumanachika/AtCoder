#include <bits/stdc++.h>
#define int int64_t
using namespace std;
using pair = pair<int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;
const int INF = 100000000;
// " ", ' '

// プロトタイプ宣言
// int myfunc(int, vvec);

// グローバル変数
// int N, M;
// vvec data(N, vec(M));

// 関数：

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	vec A(N);
	for (int i=0; i<N; i++) {
		cin >> A.at(i);
	}

// .at(x)はxが存在しない場合エラーとなるため、[x]を使用。
	map<int, int> cnt;
	for(int x: A) {
		if (cnt.count(x)) cnt[x]++;
		else cnt[x] = 1;
	}

	int max_cnt = 0;
	int max_x;
	for(int x: A) {
		if (max_cnt < cnt[x]) {
			max_cnt = cnt[x];
			max_x = x;
		}
	}

	cout << max_x << ' ' << max_cnt << endl;
	
}
