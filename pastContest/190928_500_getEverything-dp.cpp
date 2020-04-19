#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
//using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

//プロトタイプ宣言
//int myfunc(int, vvec);

//グローバル変数
//int N, M;
//vvec data(N, vec(M));
const int INF = 1001001001;

//関数：
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	vector<pair<int, int>> key;
	rep(i, M) {
		int a, b; cin >> a >> b;
		int s = 0;
		rep(j, b) {
			int c; cin >> c; --c;
			s |= 1<<c; //2^c:開く箱の番号をビットの位置で表示
		}
		key.emplace_back(s,a);
	}

	vec dp(1<<N, INF); //2^n:dp[Set] = {Sを全て開けられる鍵の買い方の最小コスト}
	dp[0] = 0;
	rep(s, 1<<N) {
		rep(i, M)	{
		int t = s | key.at(i).first;
		int cost = dp.at(s) + key.at(i).second;
		dp.at(t) = min(dp.at(t), cost);
		}
	}
	int ans = dp.back();
	if(ans == INF) ans = -1;
	cout << ans << endl;
	return 0;
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
