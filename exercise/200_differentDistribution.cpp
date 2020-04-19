#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int counter=0;
  cin >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
	  cin >> A.at(i) >> B.at(i);
  }
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  reverse(B.begin(),B.end());
  counter=counter+B.at(N-1)+A.at(N-1);
  cout<<counter<<endl;
  return 0;
}
