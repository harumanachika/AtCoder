#include <bits/stdc++.h>
#define int int64_t
using namespace std;
using pair = pair<int, int>;
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
	vec A(N);
	for (int i=0; i<N; i++) cin >> A.at(i);

	int max_sbt = 0;
	for (int i=0; i<N-1; i++) {
		for (int j=i+1; j<N; j++) {
			int sbt = abs(A.at(i)-A.at(j));
			if (max_sbt < sbt) max_sbt = sbt;
		}
	}

	cout << max_sbt << endl;
}
