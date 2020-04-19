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

	string s; cin >> s;
	string odd_s;
	for(int i=0; i<s.size(); i++) {
		if(i%2==0) odd_s.push_back(s.at(i));
	}

	cout << odd_s << endl;
	
}
