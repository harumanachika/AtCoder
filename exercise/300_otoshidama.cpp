#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    int i, j, k;
    bool frag = false;
    
    for (i = 0; i <= N; i++) {
		if (10000*i > Y) continue;
		for (j = 0; j <= N; j++) {
			k = N - i - j;
			if (10000*i + 5000*j > Y || k < -1) continue;
			int X = 10000*i + 5000*j + 1000*k;
			if (Y == X) {
				frag = true;
				break;
			}
		}
	if (frag) break;
	}
	
	if (frag) {
		cout << i << " " << j << " " << k << endl;
	}
	else {
		cout << "-1 -1 -1" <<endl;
	}
}
