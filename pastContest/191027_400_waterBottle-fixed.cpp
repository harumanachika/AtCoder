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
const double pi = 3.14159265358979;

//関数：
int gcd(int mx, int mn) {
	if(mn == 0) return(mx);
	else gcd(mn, mx%mn);
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	double a, b, x; cin >> a >> b >> x;
	double theta;

	if(x*2.0 <= a*a*b) theta = atan((2.0*x)/(b*b*a));
	else theta = atan((a*a*a)/(2.0*(a*a*b - x)));

	theta = 90.0 - (theta*180.0/pi);
	cout << fixed << setprecision(10) << theta << endl;
	return 0;
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';