#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;
// std::string str;
// str = std::to_string(int i);
// bitset<3> s(N);

// プロトタイプ宣言
// int myfunc(int, vvec);

// グローバル変数
// int N, M;
// vvec data(N, vec(M));

// 関数：

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	vec A(N);
	rep(i, N) cin >> A.at(i);

	priority_queue<int> que; //sortの代わりにpriority_queue（コンテナ）を使用.
	rep(i, N) {
		que.push(A.at(i));
	}

	rep(i, M) {
		int mx;
		mx = que.top(); que.pop();
		mx = mx / 2;
		que.push(mx);
	}

	int ans = 0;
	rep(i, N) {
		ans += que.top();
		que.pop();
	}

	cout << ans << endl;
	return 0;
}
