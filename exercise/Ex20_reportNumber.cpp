#include <bits/stdc++.h>
#define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;
// " ", ' '

// プロトタイプ宣言
// int myfunc(int, vector<vector<int>>);

// グローバル変数

// 関数：
int count_report_num(vector<vector<int>> &children, int x) {
	if (children.at(x).size()==0) return 1;

	int lg = children.at(x).size();
	int num = 0;
	for (int i=0; i<lg; i++) {
		num += count_report_num(children, children.at(x).at(i));
	}
	num += 1;

	return num;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);


  int N;
  cin >> N;
 
  vector<int> p(N);
  p.at(0) = -1;
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }
 
  vector<vector<int>> children(N);
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);
  children.at(parent).push_back(i); 
  }
  for (int i = 0; i < N; i++) {
    cout << count_report_num(children, i) << endl;
  }	
}
