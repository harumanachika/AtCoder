#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
//using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

// プロトタイプ宣言
// int myfunc(int, vvec);

// グローバル変数
// int N, M;
// vvec data(N, vec(M));
int const MAXCL = 1000000000000;
int const MAXID = 1000000;

// 関数：

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	vec ans(MAXID, 0);
	ans.at(0) = 1;
	for(int i=1; i<=N; i++) {
		for(int j=MAXID-1; j>=0; j--) {
			ans.at(j) *= i;
			if(ans.at(j) >= MAXCL) {
				ans.at(j+1) += ans.at(j) / MAXCL;
				ans.at(j) %= MAXCL;
			}
		}
	}

	int id = 0;
	for(int i=MAXID-1; i>=0; i--) {
		if(ans.at(i) != 0) {
			id = i;
			break;
		}
	}

	cout << ans.at(id);
	for(int i=id-1; i>=0; i--) {
		cout.width(6); cout.fill('0'); cout << ans.at(i);
	}
	cout << endl;
	return 0;
}
// std::string str;
// str = std::to_string(int i);
// bitset<3> s(N);
