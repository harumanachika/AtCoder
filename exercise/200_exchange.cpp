#include <bits/stdc++.h>
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int A, B, K;
	cin >> A >> B >> K;
	//bool frag = false;
	//if(K % 2 == 1) {
	//	frag = true;
	//}
	
	for(int i = 0; i < K; i++) {
		if(A % 2 == 1) {
			A = A - 1;
		}
		B = B + A/2;
		A = A/2;
		
		//if(frag && i == K-1) {
		if(i == K-1) {
			break;
		}
		
		i++;
		if(B % 2 == 1) {
			B = B - 1;
		}
		A = A + B/2;
		B = B/2;
	}
	
	cout << A << " " << B << endl;
		

}
