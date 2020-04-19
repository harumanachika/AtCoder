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
	vec cnt(N+1, 0);
	for (int i=1; i<=N; i++) {
		int ii = i;
		while(true) {
			if (ii%2==0) {
				cnt.at(i) += 1;
				ii = ii/2;
			}
			else break;
		}
	}

	int max_cnt = 0;
	int max_i = 1;
	for (int i=1; i<=N; i++) {
		if (max_cnt<cnt.at(i)) {
			max_cnt = cnt.at(i);
			max_i = i;
		}
	}

	cout << max_i << endl;
	
}
