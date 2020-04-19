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
const int INF = 1000000000;
//const int MAX_N = ;
//const int MAX_M = ;
//vvec dp(MAX_N, vec(MAX_M));

//関数：
/* メイン・プログラム */
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k, s; cin >> n >> k >> s;
	vec ans(n);
	
	//if(s <= n-k+1) {
	//	rep(i, s+k-1) ans[i] = 1;
	//	for(int i=s+k-1; i<n; i++) ans[i] = 0;
	//} else {
	//	int tp = s/(n-k+1);
	
	//	rep(i, n-k) {
	//		ans[i] = tp;
	//	}
	//	ans[n-k] = s - ((s/(n-k+1)) * (n-k));
	//	for(int i=n-k+1; i<n; i++) {
	//		ans[i] = tp;
	//	}
	//}
	
	rep(i, n) {
		if(s < INF) { //sの範囲(0<s<INF)に注意すればOK.
			if(i < k) ans[i] = s;
			else ans[i] = s+1;
		} else {
			if(i < k) ans[i] = s;
			else ans[i] = 1;
		}
	}
	
	rep(i, n) {
		cout << ans[i] << ' ';
	}
	cout << endl;
	return 0;
}
