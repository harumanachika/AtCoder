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
	
	string S1, S2;
	cin >> S1; S2 = S1;
	int N, counter1, counter2;
	N = S1.size();
	
	counter1 = 0;
	for (int i=1; i<N; i++) {
		if (S1[i] == S1[i-1]) {
			if (S1[i] == '0') S1[i] = '1';
			else S1[i] = '0';
			counter1 = counter1 + 1;
		}
	}
	//cout << S1 << endl;
	
	counter2 = 0;
	for (int i=N-2; i>=0; i--) {
		if (S2[i] == S2[i+1]) {
			if (S2[i] == '0') S2[i] = '1';
			else S2[i] = '0';
			counter2 = counter2 + 1;
		}
	}
	//cout << S2 << endl;
	
	cout << min(counter1, counter2) << endl;
}
