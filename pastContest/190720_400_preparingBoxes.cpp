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
	
	int N; cin >> N;
	vector<int> a(N+1), b(N+1, 0);
	for (int i=1; i<=N; i++) {
		cin >> a.at(i);
	}
	
	for (int i=N; i>0; i--) {
		int sum = 0;
		for (int j=i+i; j<=N; j=j+i) {
			sum += b.at(j);
		}
		if (sum%2 != a.at(i)) b.at(i) += 1;
	}
	
	vector<int> ans;
	for (int i=1; i<=N; i++) {
		if (b.at(i)) {
			ans.push_back(i);
		}
	}
	cout << ans.size() << endl;
	for (int i=0; i<ans.size(); i++) {
		cout << ans.at(i);
		if (i==ans.size()-1) cout << endl;
		else cout << ' ';
	}
}
