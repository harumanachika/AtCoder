#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
#define all(v) v.begin(),v.end()
#define chmin(x, y) x = min(x, y) 
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

	int N, M, L;
	cin >> N >> M >> L;
	vvec dist(N, vec(N, INF));
	rep(i, N) dist[i][i] = 0;
	rep(i, M) {
		int a, b, c;
		cin >> a >> b >> c;
		--a; --b;
		dist[a][b] = dist[b][a] = c;
	}

	rep(k, N)rep(i, N)rep(j, N) chmin(dist[i][j], dist[i][k]+dist[k][j]);

	vvec dist2(N, vec(N, INF));
	rep(i, N) dist2[i][i] = 0;
	rep(i, N)rep(j, N) {
		if(dist[i][j] <= L) dist2[i][j] = 1;
	}

	rep(k, N)rep(i, N)rep(j, N) chmin(dist2[i][j], dist2[i][k]+dist2[k][j]);

	int Q; cin >> Q;
	rep(i, Q) {
		int s, t; cin >> s >> t;
		--s; --t;
		int ans = dist2[s][t] - 1;
		if(dist2[s][t] == INF) ans = -1;
		cout << ans << endl;
	}
	return 0;
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';