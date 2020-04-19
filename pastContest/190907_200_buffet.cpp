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
	vec A(N+1, 0), B(N+1, 0), C(N+1, 0);
	rep(i, N) {
		cin >> A.at(i);
		A.at(i) -= 1;
	}
	rep(i, N) cin >> B.at(i);
	rep(i, N-1) cin >> C.at(i);

	int ans = B.at(A.at(0));
	for(int i=1; i<N; i++) {
		if(A.at(i) == A.at(i-1)+1) {
		ans += B.at(A.at(i))+C.at(A.at(i-1));
		}
		else {
		ans += B.at(A.at(i));
		}
	}

	cout << ans << endl;

	return 0;
}
