#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;
// “ “, ‘ ‘

// プロトタイプ宣言
// int myfunc(int, vvec);

// グローバル変数
// int N, M;
// vvec data(N, vec(M));
const int MAXN = 1005;
const int MAXV = 1005*(1005-1)/2;
vvec  to(MAXV, vec()); //list of vertex next to v.
vvec ID(MAXN, vec(MAXN));

vector<bool> calculated(MAXV, false);
vector<bool> visited(MAXV, false);
vec dp(MAXV); //max length of path from v.

// 関数：
int toID(int i, int j) {
	if(i > j) swap(i, j);
	return ID.at(i).at(j);
}

int dfs(int v) {
	if(visited.at(v)) {
		if(!calculated.at(v)) return -1;
		return dp.at(v);
	}
	visited.at(v) = true;
	dp.at(v) = 1;
	for(int u: to.at(v)) {
		int res = dfs(u);
		if(res==-1) return -1;
		dp.at(v) = max(dp.at(v), res+1);
	}
	calculated.at(v) = true;
	return dp.at(v);
}


signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N; cin >> N;
	vvec A(N, vec(N-1));
	rep(i, N) {
		rep(j, N-1) {
			cin >> A.at(i).at(j);
A.at(i).at(j) -= 1;
		}
	}
	
	int V = 0;
	rep(i, N)rep(j, N) {
		if(i < j) {
			ID.at(i).at(j) = V++;
		}
	}
	rep(i, N) {
		rep(j, N-1) {
			A.at(i).at(j) = toID(i, A.at(i).at(j));
		}
		rep(j, N-2) {
			to.at(A.at(i).at(j+1)).push_back(A.at(i).at(j));
		}
	}
	
	int ans = 0;
	rep(i, V) {
		int res = dfs(i);
		if(res == -1) {
			cout << “-1” << endl;
			return 0;
		}
		ans = max(ans, res);
	}

	cout << ans << endl;
	return 0;
}
