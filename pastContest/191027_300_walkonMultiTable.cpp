#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define int int64_t
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

//関数：
int gcd(int mx, int mn) {
	if(mn == 0) return(mx);
	else gcd(mn, mx%mn);
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	int lg = sqrt(N);
	int cl = 1;
	for(int i=lg; i>=1; --i) {
		if(N % i == 0) {
			cl = i;
			break;
		}
	}

	int rw = N / cl;
	cout << (cl-1) + (rw-1) << endl;
	return 0;
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';