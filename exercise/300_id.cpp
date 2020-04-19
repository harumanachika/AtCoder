#include <bits/stdc++.h>
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N, M;
	cin >> N >> M;
	vector<vector<pair<int, int>>> data(N, vector<pair<int, int>>());
	for (int i = 0; i < M; i++) {
		int P, Y;
		cin >> P >> Y;
		P--;
		data[P].push_back({Y, i});
	}

	vector<int> prf(M), cty(M);
	for (int i = 0; i < N; i++) {
		sort(data[i].begin(), data[i].end());
		int k = data[i].size();
		for (int j = 0; j < k; j++) {
			prf[data[i][j].second] = i+1;
			cty[data[i][j].second] = j+1;
		}
	}
	
	for (int i = 0; i < M; i++) {
		cout.width(6);
		cout.fill('0');
		cout << prf[i];
		
		cout.width(6);
		cout.fill('0');
		cout << cty[i] << endl;
	}	
}
