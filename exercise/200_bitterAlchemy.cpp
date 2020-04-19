#include <bits/stdc++.h>
#define int int64_t
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
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
	
	int N, X; cin >> N >> X;
	vec m(N); int sum_m = 0; int min_m = INF;
	for(int i=0; i<N; i++) {
		cin >> m.at(i);
		if(min_m>m.at(i)) min_m = m.at(i);

		sum_m += m.at(i);
	}

	int ans = N + (X-sum_m)/min_m;
	cout << ans << endl;
}
