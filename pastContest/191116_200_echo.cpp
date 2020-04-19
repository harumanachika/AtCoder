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
//const int mod = ;

//関数：
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

/* クイック・ソート（返し値：互換数） */
int64_t quicksort(vector<int> &arr, int left, int right) {
	int i, j, p;
	int64_t ans = 0;
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

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	string s; cin >> s;
	
	int lg = s.size();
	if(n%2 != 0) {
		cout << "No" << endl;
		return 0;
	}
	int slg = n/2;
	bool frag = true;
	for(int i=0; i<slg; i++) {
		if(s[i] != s[slg+i]) {
			frag = false;
			break;
		}
	}
	if(frag) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
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
