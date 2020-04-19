#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

// プロトタイプ宣言
// int myfunc(int, vvec);

// グローバル変数
// int N, M;
// vvec data(N, vec(M));

// 関数：
string incvec(vec p) {
	int lg = p.size();
	string ans = "YES";
	rep(i, lg-1) {
		if(p.at(i) > p.at(i+1)) ans = "NO";
	}

	return(ans);
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	vec p(N);
	rep(i, N) cin >> p.at(i);

	string ans = incvec(p);
	if(ans == "YES") {
		cout << ans << endl;
		return 0;
	}

	rep(i, N-1)for(int j=i+1; j<N; j++) {
	vec rt = p;
	int tp = rt.at(i);
	rt.at(i) = rt.at(j);
	rt.at(j) = tp;

	if(incvec(rt) == "YES") {
		cout << "YES" << endl;
		return 0;
		}
	}

	cout << ans << endl;
	return 0;
}
// std::string str;
// str = std::to_string(int i);
// bitset<3> s(N);
