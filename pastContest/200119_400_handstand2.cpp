#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define int int64_t
#define double long double
#define rep(i, N) for(int i=0; i<N; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
#define all(v) v.begin(),v.end() 
using namespace std;
//using pr = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

//プロトタイプ宣言

//グローバル変数
//const int INF = ;
//const int MAX_N = ;
//const int MAX_M = ;
//vvec dp(MAX_N, vec(MAX_M));

//関数：
/* メイン・プログラム */
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vvec c(10,vec(10, 0));
	for(int i=1; i<=n; i++) {
		int x, y; x = i;
		y = x % 10;
		while(x >= 10) x /= 10;
		c[x][y]++; 
	}
	
	int ans = 0;
	rep(i, 10)rep(j, 10) ans += c[i][j]*c[j][i];
	
	cout << ans << endl;
	return 0;
}

/* 整数 i,j(0 ≤ i,j ≤ 9) に対して、
ci,j := #{1 ≤ k ≤ N|k の先頭の桁の数は i に等しく、末尾の桁の数は j に等しい }
と定義します。これは、O(N) で計算することができます。ci,j を用いると、この問題の答えは
∑9 ∑9 ci,j × cj,i i=0 j=0
と計算することができます */
