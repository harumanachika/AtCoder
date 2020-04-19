#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N;
	cin >> N;
	int64_t i, j, k;
	bool frag = false;
	
	for (i = 1; i <= 3500; i++) {
		for (j = 1; j <= 3500; j++) {
			int64_t L = 4*i*j - N*i - N*j;
			int64_t R = N*i*j;
			if ( L > 0 ) {
				if ( R % L == 0 ) {
					cout << L << " " << R << endl;
					k = R / L;
					frag = true;
					break;
				}
			}
		}
		if (frag) {
			break;
		}
	}
	int64_t L = 4*i*j*k;
	int64_t R = N*(i*j + j*k + k*i);
	cout << L << " " << R << endl;
	cout << i << " " << j << " " << k << endl;				

}
