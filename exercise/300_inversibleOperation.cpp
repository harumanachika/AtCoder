#include <bits/stdc++.h>
#define int int64_t
using namespace std;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string S;
	cin >> S;
	int width; width = S.size();
	int counter = 0; int n = 0;
	
	for (int i = 0; i < width; i++){
		 if (S.at(i) == 'W') {
			 counter = counter + n;
		 }
		 else {
			 n++;
		 }
	 }
	 
	 cout << counter << endl;
}
