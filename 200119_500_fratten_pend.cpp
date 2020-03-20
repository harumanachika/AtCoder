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
	const int dv = 1000000007;
//vvec dp(MAX_N, vec(MAX_M));

//関数：
/* ユークリッドの互除法 */
int gcd(int x, int y) {
	if(x > y) swap(x, y);
 
	int ans;
	while(x > 0) {
		ans = x;
		x = y % x;
		y = ans;
	}
	return ans;
}

/* メイン・プログラム */
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vec a(n), b(n);
	rep(i, n) cin >> a[i];
	
	int lcd = 1;
	rep(i, n) lcd = (lcd*a[i]) / gcd(lcd, a[i]);
	
	rep(i, n) b[i] = lcd/a[i];
	int ans = 0;
	rep(i, n) ans += b[i]%dv;
	ans %= dv;
	
	cout << ans << endl;
	return 0;
}
