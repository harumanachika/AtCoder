#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int>  card(N);
  for (int i = 0; i < N; i++) {
	  cin >> card.at(i);
  }
  sort(card.begin(), card.end());
  reverse(card.begin(), card.end());
  
  int score = 0;
  int sig = 1;
  for (int i = 0; i < N; i++) {
	  score = score + sig * card.at(i);
	  sig = sig * (-1);
  }
  
  cout << score << endl;

}
