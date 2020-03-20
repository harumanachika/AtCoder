#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define int int64_t
#define double long double
#define rep(i, N) for(int i=0; i<N; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
#define all(v) v.begin(),v.end() 
using namespace std;
using pr = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

//プロトタイプ宣言

//グローバル変数
//const int INF = ;
//const int MAX_N = ;
//const int MAX_M = ;
const int mod = 1000000007;
//vvec dp(MAX_N, vec(MAX_M));

//関数：
/* 自動でmodを取ってくれる整数型 */
struct mint {
	int x;
	mint(int x=0) : x((x%mod + mod) % mod) {}
	mint operator-() const {
		return mint(-x);
	}
	mint &operator+=(const mint a) {
		if ((x += a.x) >= mod) x -= mod;
		return *this;
	}
	mint &operator-=(const mint a) {
		if ((x += mod-a.x) >= mod) x -= mod;
		return *this;
	}
	mint &operator*=(const mint a) {
		(x *= a.x) %= mod;
		return *this;
	}
	mint operator+(const mint a) const {
		mint res(*this);
		return res += a;
	}
	mint operator-(const mint a) const {
		mint res(*this);
		return res -= a;
	}
	mint operator*(const mint a) const {
		mint res(*this);
		return res*=a;
	}
	mint pow(int t) const {
		if(!t) return 1;
		mint a = pow(t>>1);
		a *= a;
		if(t&1) a *= *this;
		return a;
	}

// for prime mod
	mint inv() const {
		return pow(mod-2);
	}
	mint &operator/=(const mint a) {
		return (*this) *= a.inv();
	}
	mint operator/(const mint a) const {
		mint res(*this);
		return res /= a;
	}
};

/* エラトステネスの篩による素因数分解 */
struct Sieve {
	int n;
	vector<int> f, primes;
	Sieve(int n=1) : n(n), f(n+1) {
		f[0] = f[1] = -1;
		for(int i=2; i<=n; ++i) {
			if(f[i]) continue;
			primes.push_back(i);
			f[i] = i;
			for (int j=i*i; j<=n; j+=i) {
				if(!f[j]) f[j] = i;
			}
		}
	}

	bool isPrime(int x) {
		return f[x] == x;
	}
	vector<int> factorList(int x) {
		vector<int> res;
		while (x != 1) {
			res.push_back(f[x]);
			x /= f[x];
		}
		return res;
	}
	vector<pr> factor(int x) {
		vector<int> fl = factorList(x);
		if(fl.size() == 0) return {};
		vector<pr> res(1, pr(fl[0], 0));
		for(int p : fl) {
			if(res.back().first == p) {
				res.back().second++;
			} else {
				res.emplace_back(p, 1);
			}
		}
		return res;
	}
};

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
	
	Sieve sieve(1e6);
	
	map<int,int> mp;
	rep(i, n) {
		auto f = sieve.factor(a[i]);
		for(auto p : f) {
			mp[p.first] = max(mp[p.first], p.second);
		}
	}
	
	mint lcm = 1;
	for(auto p : mp) {
		rep(i, p.second) {
			lcm *= p.first;
		}
	}
	
	mint ans;
	rep(i, n) {
		mint b = lcm/a[i];
		ans += b;
	}
	
	cout << ans.x << endl;
	return 0;
}

/* pi を素数とし、X = ∏ pei , Y = ∏ pe′i と*1素因数分解されているとします (ei, e′i の一方は 0 i i ∏ max(ei,e′)
でもよい)。このとき、X と Y の最小公倍数は p i になります。このことを用いると、 i
A1, ..., AN の最小公倍数を素因数分解された形で求めることができます。
以上より、この問題は A = max Ai として、O(N √A) で解くことができました。また、適当な前計算により素因数分解を高速化するなどの工夫により O(A + N log A) で求めることもできます。*/
