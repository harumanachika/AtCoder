#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M, N, A, B;
    int ANS = 0;
    vector<int> P(5);
    cin >> N >> A >> B;
    
    for (M = 1; M < N+1; M++) {
		P.at(4) = M*0.0001;
		P.at(3) = M*0.001 - P.at(4)*10;
		P.at(2) = M*0.01 - P.at(4)*100 - P.at(3)*10;
		P.at(1) = M*0.1 - P.at(4)*1000 - P.at(3)*100 - P.at(2)*10;
		P.at(0) = M - P.at(4)*10000 - P.at(3)*1000 - P.at(2)*100 - P.at(1)*10;
		int PSM = 0;
		for (int i = 0; i < 5; i++) {
			PSM = PSM + P.at(i);
		}
		if (PSM < B+1 && PSM > A-1) {
			//cout << M << " ";
			ANS = ANS + M;
		}
	}
	
	cout << ANS << endl;

}
