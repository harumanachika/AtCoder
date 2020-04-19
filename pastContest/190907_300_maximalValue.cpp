#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;
// " ", ' '
// std::string str;
// str = std::to_string(int i);

// プロトタイプ宣言
// int myfunc(int, vvec);

// グローバル変数
// int N, M;
// vvec data(N, vec(M));

// 関数：

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N; cin >> N;
	vec B(N+1, 0);
	rep(i, N-1) cin >> B.at(i);

	int ans = B.at(0)+B.at(N-2);
	for(int i=1; i<N-1; i++) {
		ans += min(B.at(i-1), B.at(i));
	}

	cout << ans << endl;
	return 0;
}
