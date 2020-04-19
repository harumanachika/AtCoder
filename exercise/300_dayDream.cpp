#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S;
  int M = S.size();
  //cout << M << endl;
  reverse(S.begin(),S.end());
  int j = 0;
  int i = 0;
  bool frag = true;
  
  while (j < M) {
	  //cout << j << " ";
	  T = "";
  	  for (i = j; i < j + 5; i++) {
		  T = T + S.at(i);
	  }
	  //cout << T << " ";
	  if (T == "maerd" || T == "esare") {
		  j = j + 5;
		  continue;
	  }
	  else {
		  T = T + S.at(j + 5);
		  //cout << T << " ";
		  if (T == "resare") {
			  j = j + 6;
			  continue;
		  }
		  else {
			  T = T + S.at(j + 6);
			  //cout << T << " ";
			  if (T == "remaerd") {
				  j = j + 7;
				  continue;
			   }
			   else {
				   cout << "NO" << endl;
				   frag = false;
				   break;
			   }
		   }
	   }
   }
   
  if (frag) {
	  cout << "YES" << endl;
  }
}
