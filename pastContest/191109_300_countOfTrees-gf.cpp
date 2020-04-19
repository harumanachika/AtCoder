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
//int myfunc(int, vvec);

//グローバル変数
//int N, M;
//vvec data(N, vec(M));
const int MX_N = 100005;
int mod = 998244353;

//関数：
int gcd(int mx, int mn) {
	if(mn == 0) return(mx);
	else gcd(mn, mx%mn);
}

/* yにxをn回乗じmodで割った余りを返す。
（素数pに対して x**p = x (mod p) が成り立つ。）*/
int mod_pow(int y, int x, int n, int mod) {
	int ans = y;
	rep(i, n) {
		ans *= x;
		ans %= mod;
	}
	return ans;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<int> d(n);
	
	vector<int> ct(MX_N, 0);
	int mx = 0;
	rep(i, n) {
		cin >> d[i];
		ct[d[i]]++;
		if(d[i] > mx) mx = d[i];
	}
	
	if(d[0] != 0 || ct[0] != 1) {
		cout << 0 << endl;
		return 0;
	}
	
	int ans = 1;
	for(int i=1; i<mx; i++) {
		ans = mod_pow(ans, ct[i], ct[i+1], mod);
	}
	
	cout << ans << endl;
	return 0;
}

//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';