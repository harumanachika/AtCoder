#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
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
const int MLG = 105;
string S; int K;
int lg;
vec c(MLG);

//関数：
int countcells(int ini) {
	c[0] = ini;
	int ct = 0;
	rep(i, lg-1) {
		if(S[i] == S[i+1]) c[i+1] = c[i] + 1;
		else c[i+1] = 0;
	}
	rep(i, lg) {
		int re = c[i] % 2;
		ct += re;
	}
	return ct;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> S; cin >> K;
	lg = S.size();

	int ini = 0;
	if(S[0] == S[lg-1]) {
		ini = 1;
		for(int i=lg-1; i>=0; --i) {
			if(S[i] != S[i-1]) break;
			ini += 1;
		}
	}

	if(ini == lg) {
		int ct = (lg * K) / 2;
		cout << ct << endl;
		return 0;
	} else {

	int ct = 0;
	ct += countcells(0);
	ct += countcells(ini) * (K-1);

	cout << ct << endl; 
	return 0;

	}
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
