#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define int int64_t
#define double long double
#define rep(i, N) for(int i=0; i<N; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
#define all(v) v.begin(),v.end() 
using namespace std;
using pr = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

//プロトタイプ宣言
//int myfunc(int, vvec);

//グローバル変数
//int N, M;
//vvec data(N, vec(M));

//関数：
int gcd(int mx, int mn) {
	if(mn == 0) return(mx);
	else gcd(mn, mx%mn);
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vec a(n); vec b(n);
	vector<pair<int,int>> aa(n); vector<pair<int,int>> bb(n);
	rep(i, n) {
		cin >> a[i]; aa[i] = {a[i],i};
	}
	rep(i, n) {
		cin >> b[i]; bb[i] = {b[i],i};
	}
	
	sort(all(aa));
	sort(all(bb));
	rep(i, n) {
		if(aa[i].first > bb[i].first) {
			cout << "No" << endl;
			return 0;
		}
	}
	
	//Swapの回数はn-#cycleで求まる。2サイクル以上の場合Yes。
	rep(i, n-1) {
		if(aa[i+1].first <= bb[i].first) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	
	//1サイクルの場合。Permutationの実装。
	vector<int> p(n);
	rep(i, n) p[aa[i].second] = bb[i].second;
	int ct = 1;
	int x = p[0];
	while(x != 0) {
		ct++;
		x = p[x];
	}
	if(ct == n) cout << "No" << endl;
	else cout << "Yes" << endl;
	
	return 0;
}
//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';