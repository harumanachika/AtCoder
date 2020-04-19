#include <bits/stdc++.h>
#define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;
// " ", ' '

// プロトタイプ宣言
// int myfunc(int, vector<vector<int>>);

// グローバル変数

// 関数：

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N; cin >> N;
	vector<int> A(N+1), B(N+2);
	for (int i=0; i<N+1; i++) cin >> A.at(i);
	for (int i=0; i<N; i++) cin >> B.at(i);
	
	vector<int> F1(N+1), F2(N+1);
	F1.at(0) = min(A.at(0), B.at(0));
	F2.at(0) = min(A.at(1), B.at(0)-F1.at(0)); 
	for (int i=1; i<N; i++) {
		F1.at(i) = min(A.at(i)-F2.at(i-1), B.at(i));
		F2.at(i) = min(A.at(i+1), B.at(i)-F1.at(i));
	}

	int ans = 0;
	for (int i=0; i<N; i++) {
		ans += F1.at(i)+F2.at(i);
	}

	cout << ans << endl;
}
