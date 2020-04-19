#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
//using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

//プロトタイプ宣言
//int myfunc(int, vvec);

//グローバル変数
//int N, M;
//vvec data(N, vec(M));

//関数：
int gcd(int mx, int mn) {
	if(mn == 0) return(mx);
	else gcd(mn, mx%mn);
}

bool has_divisor(int n, int i) {
	//base case 1:
	if (i == n) return false;
	//base case 2:
	if (n % i == 0) return true;
	return has_divisor(n, i+1);
}

bool is_prime(int n) {
	if (n == 1) return false;
	else if (n == 2) return true;
	else {
		return !has_divisor(n, 2);
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B; cin >> A >> B;
	int mn = min(A, B);
	int mx = max(A, B);
	int gd = gcd(mx, mn);

	int ct = 0;
	for(int i=2; i*i<=gd; i++) {
		if(gd%i == 0) ct += 1;
		while(gd%i == 0) gd /= i; //Remained Only Prime i! 
	}
	if(gd != 1) ct += 1; //?

	cout << ct+1 << endl; //Add i=1 Case.
	return 0;
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
