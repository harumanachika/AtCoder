#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> kagami(N);
  for (int i = 0; i < N; i++) {
	  cin >> kagami.at(i);
	}
  int counter = 1;
  
  sort(kagami.begin(), kagami.end()); 
  
  for (int i = 0; i < N-1; i++) {
	if (kagami.at(i+1) > kagami.at(i)) {
		counter++;
	 	}
	}

  cout << counter <<endl;

}
