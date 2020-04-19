#include <bits/stdc++.h>
#define int int64_t
using namespace std;
using pr = tuple<string, int, int>;
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
	string s; int p;
	vector<pair<pair<string, int>, int>> ps(N);
	for (int i=0; i<N; i++) {
		cin >> s >> p;
		ps.at(i).first = make_pair(s, -p);
		ps.at(i).second = i;
	}

	sort(ps.begin(), ps.end());

	for (int i=0; i<N; i++) {
		cout << ps.at(i).second+1 << endl;
	}
}
