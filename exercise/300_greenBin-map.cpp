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
	map<string, int> mp;
	for(int i=0; i<N; i++) {
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		mp[s] += 1;
	}

	int counter = 0;
	for(auto p=mp.begin(); p!=mp.end(); p++) {
		int vl = p->second;
		counter += vl*(vl-1)/2;
	}
	cout << counter << endl;
	 
}
