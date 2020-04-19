#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define int int64_t
#define double long double
#define rep(i, N) for(int i=0; i<N; i++)
#define repr(i, N) for(int i=N-1; i>=0; --i)
#define all(v) v.begin(),v.end() 
using namespace std;
//using pr = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;

//プロトタイプ宣言

//グローバル変数
const int INF = 105;
const int MAX_N = 20; //15+5
vec a(MAX_N);
vvec x(MAX_N, vec(MAX_N, INF));
vvec y(MAX_N, vec(MAX_N, INF));
//const int MAX_M = ;
//vvec dp(MAX_N, vec(MAX_M));

//関数：
/* 二進表記の1の数をカウント */
int count(int bits) {
	if(bits == 0) return 0;
	return count(bits >> 1) + (bits & 1);
}

/* メイン・プログラム */
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		for(int j=1; j<=a[i]; j++) {
			int xx, yy; cin >> xx >> yy;
			x[i][j] = xx; y[i][j] = yy;
		}
	}
	
	//bit全探索：0以上2^n未満の整数jが「1以上N以下の整数kについて、人kが正直者であることと、jを2進数表記した際にk − 1桁目が1であることが同値」という状態を表すことと定義。
	int ans = 0;
	int prm = 1 << n; //prm = n_P_2
	for(int bt=1; bt<prm; bt++) {
		bool frag = true;
		for(int i=1; i<=n; i++) {
			if(!(bt & (1<<(i-1)))) continue; //btのi-1桁目が0ならそのまま。
			for(int j=1; j<=a[i]; j++) {
				int bbt = (bt >> (x[i][j]-1)) & 1;
				if(bbt ^ y[i][j]) frag = false; //^: XOR
			}
		}
		if(frag) ans = max(ans, count(bt));
	}
	
	cout << ans << endl;
	return 0;
}

//std::string str;
//str = std::to_string(int i);
//bitset<3> s(N);
//int ans = (char)grid - '0';
//int id = lower_bound(all(arr), x) - arr.begin();
//cout << fixed << setprecision(10) << tld << endl;
//vector<int> sub(itr,itr+d); //イテレーターで部分数列(i=0...d)を指定
		
/*struct data {
	char *name;
	int age;
	int height;
	double weight;
};*/

/*string ans = w;
string &ref = ans;
rep(i, N) {
	ref[i] = arr[i];
}*/

/*map<int,int> mp;
for(auto p : mp) {
	ct += p.second*(p.second-1); }

map<int,int>::iterator itr;
for(itr = mp.begin(); itr != mp.end(); itr++) {
	ans += itr->second * (itr->second-1);
}*/
