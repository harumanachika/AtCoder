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
int quicksort(vector<int> &, int, int);
void countsort(vector<int> &, vector<int> &);
bool has_divisor(int, int);

//グローバル変数
//const int MAX_N = ;
//const int MAX_M = ;
//vvec dp(N, vec(M));
const int INF = 2020202025;

//関数：
/* yにxをn回乗じmodで割った余りを返す
（素数pに対して x**p = x (mod p) が成り立つ）*/
//const int mod = ;
int mod_pow(int y, int x, int n, int mod) {
	//base case:
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

/* yにmの階乗（からn-1の階乗を除したもの）を乗じmodで割った余りを返す（m > n） */
//const int mod = ;
int mod_factorial(int y, int m, int n, int mod) {
	int ans = y;
	for(int i=m; i>=n; --i) {
		ans *= i;
		ans %= mod;
	}
	return ans;
}

/* ユークリッドの互除法(mx > mn) */
int gcd(int mx, int mn) {
	if(mn == 0) return(mx);
	else gcd(mn, mx%mn);
}

/* 素数判定関数 */
bool is_prime(int n) {
	if (n == 1) return false;
	else if (n == 2) return true;
	else {
		return !has_divisor(n, 2);
	}
}

/* 配列の中位数を返す */
int median(vector<int> arr) {
	int lg = arr.size();
	int med;
	vector<int> v(lg);
	countsort(arr, v);
	if(lg%2 != 0) {
		med = v[lg/2];
	} else {
		med = (v[lg/2-1]+v[lg/2])/2 + 1;
	}	
	return med;
}

const int mod = 1000000007;

/* メイン・プログラム */
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<int> a(n), b(n);
	rep(i, n) {
		cin >> a[i]; b[i] = a[i];
	}
	for(int i=1; i<n; i++) b[i] += b[i-1];
	int pbt;
	//rep(i, n) {
	//	if(b[i] >= b[n-1]/2) {
	//		pbt = i;
	//		break;
	//	}
	//}
	int ans = INF;
	rep(pbt, n) {
		ans = min(ans, abs(b[pbt]-(b[n-1]-b[pbt])));
	}
	
	cout << ans << endl;
	return 0;
}

/* クイック・ソート（返し値：互換数） */
int quicksort(vector<int> &arr, int left, int right) {
	int i, j, p;
	int ans = 0;
	i = left; j = right;
	p = (arr[i]+arr[j]) / 2;
	while(i < j) {
		while(arr[i] < p) i++;
		while(arr[j] > p) j--;
		if (i < j) {
			swap(arr[i++], arr[j--]);
			ans += abs(i-j);
		}
		if(i == j) {
			if(arr[i] < p) i++;
			else if(arr[j] > p) j--;
		}
		if (i >= left+2) ans += quicksort(arr, left, i-1);
		if (j <= right-2) ans += quicksort(arr, j+1, right);
	}
	return ans;
}

/* 分布数え上げソート（aをソートしてbに格納） */
void countsort(vector<int> &a, vector<int> &b) {
	int lg = a.size();
	map<int, int> mp;
	int mx = 0;
	
	for(int i=0; i<lg; i++) {
		mp[a[i]]++;
		if(a[i] > mx) mx = a[i];
	}
	for(int i=1; i<=mx; i++) mp[i] += mp[i-1];
	for(int i=lg-1; i>=0; --i) b[--mp[a[i]]] = a[i];	
}

// 以下の関数等は気にしない。
bool has_divisor(int n, int i) {
	//base case 1:
	if (i == n) return false;
	
	//base case 2:
	if (n % i == 0) return true;
	
	return has_divisor(n, i+1);
}

//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';
//int id = lower_bound(all(arr), x) - arr.begin();
//cout << fixed << setprecision(10) << tld << endl;
//vector<int> sub(itr,itr+d); //イテレーターで部分数列(i=0...d)を指定
		
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
