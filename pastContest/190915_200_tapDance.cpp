#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<char>;
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
	
	string S, ans; cin >> S;
	int lg = S.size();
	ans = "Yes";

	rep(i, lg) {
		int l = i * 2;
		if(l >= lg) break;
		if (S.at(l) != 'R' && S.at(l) != 'U' && S.at(l) != 'D')  ans = "No";

		int k = i * 2 + 1;
		if(k >= lg) break;
		if(S.at(k) != 'L' && S.at(k) != 'U' && S.at(k) != 'D')  ans = "No";
	}

	cout << ans << endl;
	return 0;
}
