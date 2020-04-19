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
	
	int N, K; cin >> N >> K;
	string S; cin >> S;

	int gp = 0;
	rep(i, N-1) {
		if(S.at(i) == S.at(i+1)) gp += 1;
	}

	int ans;
	ans = min(gp+2*K, N-1);

	cout << ans << endl;
	return 0;
}
