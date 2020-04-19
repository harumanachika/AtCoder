#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> t(N+1), x(N+1), y(N+1);
  t.at(0) = x.at(0) = y.at(0) = 0;
  for (int i = 1; i < N+1; i++) {
	  cin >> t.at(i) >> x.at(i) >> y.at(i);
  }
  bool frag = true;
  
  int TT, XX, YY;
  for (int i = 0; i < N; i++) {
	  TT = t.at(i+1) - t.at(i);
	  XX = x.at(i+1) - x.at(i);
	  YY = y.at(i+1) - y.at(i);
	  if (TT-(XX+YY) < 0 || (TT-(XX+YY))%2 != 0) {
		  frag = false;
		  break;
	  }
  }
  if (frag) {
	  cout << "Yes" << endl;
  }
  else {
	  cout << "No" <<endl;
  }
}
