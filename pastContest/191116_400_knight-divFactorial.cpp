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
bool has_divisor(int, int);

//グローバル変数
//const int MAX_N;
//const int MAX_M;
//vvec data(N, vec(M));
//const int INF = ;

//関数：
/* yにxをn回乗じmodで割った余りを返す。
（素数pに対して x**p = x (mod p) が成り立つ。）*/
const int mod = 1000000007;
int mod_pow(int y, int x, int n, int mod) {
	//base case.
	int ans = y;
	if(n == 0) return ans;
	
	if(n%2 == 0) {
		int d = mod_pow(1, x, n/2, mod);
		rep(i, 2) ans = (ans * d) % mod;
	} else {
		ans = (ans * x) % mod;
		ans = (ans * mod_pow(1, x, n-1, mod)) % mod;
	}
	return ans;
}

/* yにmの階乗（からn-1の階乗を除したもの）を乗じmodで割った余りを返す（m > n）。 */
//const int mod = ;
int mod_factorial(int y, int m, int n, int mod) {
	int ans = y;
	for(int i=m; i>=n; --i) {
		ans *= i;
		ans %= mod;
	}
	return ans;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int x, y; cin >> x >> y;
	
	if((x+y)%3 != 0) {
		cout << 0 << endl;
		return 0;
	}
	
	/* X+Yが3の倍数のとき、(+1,+2)の移動の回数をn、(+2,+1)の移動の回数をmとすると、n+2m=X,2n+m=Yという連立方程式が得られ、n,mが求まります。n<0またはm<0のとき答えは0です。そうでないときは、(m+n)Cnです。 */ 
	int n = (2*y-x)/3;
	int m = (x+y)/3 - n;
	if(n < 0 || m < 0) {
		cout << 0 << endl;
		return 0;
	}
	
	int mm = max(m, n); int nn = min(m, n);
	int ans = mod_factorial(1, mm+nn, mm+1, mod);
	//x^(p-2) = (1/x) (mod p).
	//n!で除す。 
	for(int i=1; i<=nn; i++) {
		ans = ans * mod_pow(1, i, mod-2, mod) % mod;
	}
	
	cout << ans << endl;
	return 0;
}

//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';
//int id = lower_bound(all(arr), x) - arr.begin();

/*struct data {
	char *name;
	int age;
	int height;
	double weight;
};*/

/*string ans = w;
string &ref = ans;
rep(i, N) {
	ref[i] = arr[i];
}*/

/*map<int,int> mp;
for(auto p : mp) {
	ct += p.second*(p.second-1); }

map<int,int>::iterator itr;
for(itr = mp.begin(); itr != mp.end(); itr++) {
	ans += itr->second * (itr->second-1);
}*/
