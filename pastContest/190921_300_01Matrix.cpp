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

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int H, W, A, B;
	cin >> H >> W >> A >> B;

	vvec s(H, vec(W, 0));
	rep(i, B) {
		rep(j, A) s.at(i).at(j) = 0;
		for(int j=A; j<W; j++) s.at(i).at(j) = 1;
	}
	for(int i=B; i<H; i++) {
		rep(j, A) s.at(i).at(j) = 1;
		for(int j=A; j<W; j++) s.at(i).at(j) = 0;
	}

	rep(i, H) {
		rep(j, W) cout << s.at(i).at(j);
		cout << endl;
	}
	return 0;
}
// std::string str;
// str = std::to_string(int i);
// bitset<3> s(N);
