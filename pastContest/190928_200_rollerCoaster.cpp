#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

// プロトタイプ宣言
// int myfunc(int, vvec);

// グローバル変数
// int N, M;
// vvec data(N, vec(M));

// 関数：
int fct(int m, int k) {
	int ft = 1;
	rep(i, k) ft *= m;
	return(ft);
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N, K; cin >> N >> K;
	vec h(N);
	rep(i, N) cin >> h.at(i);

	int ct = 0;
	rep(i, N) {
		if(h.at(i) >= K) ct += 1;
	}

	cout << ct << endl;
	return 0;
}
// std::string str;
// str = std::to_string(int i);
// bitset<3> s(N);
