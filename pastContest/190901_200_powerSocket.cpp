#include <bits/stdc++.h>
#define int int64_t
#define rp(i, N) for(int i=0; i<N; i++);
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
	int A, B;
	cin >> A >> B;

	int ct = 0;
	int pg = 1;
	if(B==1) ct = 0;
	else {
		while(B>pg) {
			pg = pg+A-1;
			ct += 1;
		}
	}

	cout << ct << endl;
	
}
