#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, X;
    int SM;
    cin >> A >> B >> C >> X;
	int counter = 0;
	
	for (int i = 0; i < A+1; i++) {
		for (int j = 0; j < B+1; j++) {
			for (int k = 0; k < C+1; k++) {
				SM = i*500 + j*100 + k*50;
				if (SM == X) {
					counter = counter + 1;
				}
			}
		}
	}
	cout << counter << endl;

}
