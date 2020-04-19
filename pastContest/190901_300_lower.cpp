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
	
	int N; cin >> N;
	vec H(N+1), ans(N+1);
	for(int i=0; i<N; i++) cin >> H.at(i);

	int mx = 0;
	ans.at(0) = 0;
	for(int i=1; i<N; i++) {
		if(H.at(i)<=H.at(i-1)) ans.at(i) = ans.at(i-1)+1;
		else ans.at(i) = 0;
	}

	for(int i=0; i<N; i++) {
		if(mx<ans.at(i)) mx = ans.at(i);
	}

	cout << mx << endl;
		
	
}
