#include <bits/stdc++.h>
//#define int int64_t
using namespace std;
typedef pair<int, int> P;
const int INF = 100000000;

// グローバル変数


// 関数：


// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(/* 呼び出し側に対応するように引数を書く */ vector<vector<int>> &A, int &correct_count, int &wrong_count) {
  // 呼び出し側のAの各マスを正しい値に修正する
	for (int i=1; i<=9; i++) {
		for (int j=1; j<=9; j++) {
			if ( A.at(i-1).at(j-1)!=i*j ) {
				A.at(i-1).at(j-1) = i*j;
 // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる
				++wrong_count;
			}
  // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
			else {
				++correct_count;
			}
		}
	}
  // ここにプログラムを追記
}
 
 
// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }
 
  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる
 
  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);
 
  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}