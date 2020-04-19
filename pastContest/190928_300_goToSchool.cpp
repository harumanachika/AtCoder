#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
//using vec  = vector<pair<int, int>>;
//using vvec = vector<vec>;

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
	
	int N; cin >> N;
	vector<int> A(N), ans(N);
	rep(i, N) {
		cin >> A.at(i);
	}
	
	rep(i, N) {
		int tp;
		tp = A.at(i) - 1;
		ans.at(tp) = i + 1;
	}

	rep(i, N) {
		cout << ans.at(i);
		if(i != N-1) cout << ' ';
		else cout << endl;
	}
	return 0;
}
// std::string str;
// str = std::to_string(int i);
// bitset<3> s(N);
