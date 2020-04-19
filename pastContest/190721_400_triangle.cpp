#include <bits/stdc++.h>
#define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;

// グローバル変数


// 関数：


signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int S; cin >> S;
	int x2 = 1000000000;
	int y2 = 1;
	int x3 = (x2 - S % x2) % x2;
	int y3 = (S + x3) / x2;
	cout << 0 << ' ' <<  0 << ' ' << x2 << ' ' << y2 << ' ' << x3 << ' ' << y3 << endl;
}
