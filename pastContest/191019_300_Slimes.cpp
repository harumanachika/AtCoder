#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
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

	int N; cin >> N;
	string S; cin >> S;
	vec d(N);

	d[0] = 0;
	for(int i=1; i<N; i++) {
		if(S[i-1] == S[i]) d[i] = d[i-1] + 1;
		else d[i] = 0;
	}

	int ct = 0;
	rep(i, N) {
		if(d[i] == 0) ct++;
	}

	cout << ct << endl;
	return 0;
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';