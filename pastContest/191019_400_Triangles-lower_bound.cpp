#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
#define all(v) v.begin(),v.end()
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

//関数：

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	vec L(N);
	rep(i, N) cin >> L[i];

	sort(all(L));

	int ct = 0;
	rep(j, N)rep(i, j) {
		int ij = L[i] + L[j];
		int r = lower_bound(all(L), ij) - L.begin(); //High: r-1
		int l = j + 1; //low: l -> k in [l,r)
		ct += r - l;
	}

	cout << ct << endl;
	return 0;
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';