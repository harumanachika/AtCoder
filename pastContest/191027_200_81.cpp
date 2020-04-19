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
vvec tb(10, vec(10));

//関数：

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	bool frag = false;
	for(int i=1; i<10; i++)for(int j=1; j<10; j++) {
	tb[i][j] = i*j;
	}

	for(int i=1; i<10; i++)for(int j=1; j<10; j++) {
	if(tb[i][j] == N) frag = true;
	}
	if(frag) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';