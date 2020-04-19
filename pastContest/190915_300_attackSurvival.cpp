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

	int N, K, Q; cin >> N >> K >> Q;
	vec ps(N+1, 0);
	vec A(Q+1);
	rep(i, Q) {
		cin >> A.at(i);
		A.at(i) -= 1;
	}

	rep(i, Q) {
		ps.at(A.at(i)) += 1;
	}
	
	rep(i, N) {
		if(K-Q+ps.at(i) > 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}
