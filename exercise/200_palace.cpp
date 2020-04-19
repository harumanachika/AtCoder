#include <bits/stdc++.h>
#define int int64_t
#define r(i, N) for(int i=0; i<N; i++);
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;
const int INF = 100000000;
// " ", ' '

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
	int T, A; cin >> T >> A;
	vec H(N+1); for(int i=0; i<N; i++) cin >> H.at(i);

	double best_tmp=INF; int best_T;
	for(int i=0; i<N; i++) {
		double tmp = T-H.at(i)*0.006;
		if(best_tmp>abs(double(A)-tmp)) {
			best_tmp = abs(double(A)-tmp);
			best_T = i;
		}
	}

	cout << best_T+1 << endl;

}
