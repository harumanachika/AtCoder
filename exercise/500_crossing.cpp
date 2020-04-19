#include <bits/stdc++.h>
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin >> N;
	int k;
	bool frag = false;
	
	for(int i = 1; i < sqrt(2*N); i++) {
		if(i*(i+1) == 2*N) {
			k = i;
			frag = true;
			cout << "Yes" << endl;
			break;
		}
	}
	
	vector<vector<int>> S(k+1, vector<int>());
	int l = 1;
	
	if (frag) {
		cout << k+1 << endl;
		for (int i = 0; i < k; i++) {
			for (int j = i+1; j < k+1; j++) {
				if (i != j) {
					S[i].push_back(l);
					S[j].push_back(l);
					l++;
				}
			}
		}

		for (int i = 0; i < k+1; i++) {
			int size = S[i].size();
			cout << size;
			for (int j = 0; j < size; j++) cout << " " << S[i][j];
			cout << endl;
		}  			
	}
	if (!frag) cout << "No" << endl;
}
