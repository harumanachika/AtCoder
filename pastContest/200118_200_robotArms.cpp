#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define int int64_t
#define double long double
#define rep(i, N) for(int i=0; i<N; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
#define all(v) v.begin(),v.end() 
using namespace std;
//using pr = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

//プロトタイプ宣言

//グローバル変数
const int INF = 1000000000;
//const int MAX_N = ;
//const int MAX_M = ;
//vvec dp(MAX_N, vec(MAX_M));

//関数：
/* メイン・プログラム */
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<pair<int, int>> rg(n);
	rep(i, n) {
		int a, b;
		cin >> a >> b;
		rg[i].second = a-b;
		rg[i].first = a+b;
	}
	
	sort(rg.begin(), rg.end());
	
	int cur = -1*INF;
	int ans = 0;
	rep(i, n) {
		if(cur <= rg[i].second) {
			ans++;
			cur = rg[i].first;
		}
	}

	cout << ans << endl;
	return 0;
}

/*	Si = Xi − Li, Ti = Xi + Li とします。ロボット i の腕が動く範囲は (Si, Ti) となります。
ロボット i を残すかどうかは座標 Ti 以上の部分に影響を与えないことに注意すると、以下のような貪欲法 により答えを求めることができます。
ロボットを Ti が小さい順にソートし、p1, p2, . . . , pN とする。
- i = 1,2,...,N の順に、以下のことを行う。
- ロボット pi の腕がすでに残すと決めたロボットの腕と重ならないならば、ロボット pi を残すと決める。そうでないなら、残さないと決める。*/
