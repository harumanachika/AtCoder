#include <bits/stdc++.h>
#define int int64_t
#define double long double
#define rep(i, N) for(int i=0; i<N; i++)
#define rep2(i, j, M) for(int i=j; i<M; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
#define all(v) v.begin(),v.end() 
using namespace std;
using pr = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

//グローバル変数 関数：
/* MAX_P以下の素数をprimeにプッシュ */
const int MAX_P = 1000000;
queue<int> prime; vector<int> v(MAX_P, 0);
void getprime() {
	for(int i=2; i<MAX_P; i++) {
		if(v[i] == false) {
			prime.push(i);
			for(int j=2; i*j<MAX_P; j++) v[i*j] = 1;
		}
	}
}

/* メイン・プログラム */
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	/* number of tryal: begin
	int T; cin >> T;
	while(T > 0) { */
	
	getprime();
	while(!prime.empty()) {
		cout << prime.front() << ' ';
		prime.pop();
	}
	cout << endl;
	
	/* number of tryal: end
	T--; } */
	
	return 0;
}
