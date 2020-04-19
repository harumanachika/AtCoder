#include <bits/stdc++.h>
#define int int64_t
#define rp(i, N) for(int i=0; i<N; i++);
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
	
	int K, X; cin >> K >> X;
	int tp, bn;
	bn = X-K+1;
	tp = X+K-1;

	for(int i=bn; i<=tp; i++) {
		cout << i;
		if(i<tp) cout << ' ';
		else cout << endl;
	}
	
}
