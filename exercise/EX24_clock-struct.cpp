﻿#include <bits/stdc++.h>
#define int int64_t
#define rep(i, N) for(int i=0; i<N; i++)
using namespace std;
using pair = pair<int, int>;
using tup  = tuple<int, int, int>;
using vec  = vector<int>;
using vvec = vector<vec>;
// " ", ' '
// std::string str;
// str = std::to_string(int i);

// 以下に、24時間表記の時計構造体 Clock を定義する
struct Clock {

// Clock構造体のメンバ変数を書く
//   int hour    時間を表す (0~23の値をとる)
//   int minute  分を表す   (0~59の値をとる)
//   int second  秒を表す   (0~59の値をとる)
	int hour;
	int minute;
	int second;

// メンバ関数 set の定義を書く
//   関数名: set
//   引数: int h, int m, int s (それぞれ時、分、秒を表す)
//   返り値: なし
//   関数の説明:
//     時・分・秒を表す3つの引数を受け取り、
//     それぞれ、メンバ変数 hour, minute, second に代入する
	void set(int h, int m, int s) {
		hour = h; minute = m; second = s;
	}

// メンバ関数 stringify の定義を書く
//   関数名: stringify
//   引数: なし
//   返り値: string型
//   関数の仕様:
//     メンバ変数が表す時刻の文字列を返す
//     時刻の文字列は次のフォーマット
//     "HH:MM:SS"
//     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列
	string stringify() {
		string HH, MM, SS;
		if(hour < 10) HH = '0' + to_string(hour);
		else HH = to_string(hour);
		if(minute < 10) MM = '0' + to_string(minute);
		else MM = to_string(minute);
		if(second < 10) SS = '0' + to_string(second);
		else SS = to_string(second);

		string dsp;
		dsp = HH + ':' + MM + ':' + SS;
  		return(dsp);
	}		

// メンバ関数 change の定義を書く
//   関数名: change
//   引数: int diff_second
//   返り値: なし
//   関数の仕様:
//     diff_second 秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
//     diff_second の値が負の場合、時刻を戻す
//     diff_second の値が正の場合、時刻を進める
//     diff_second の値は -86400 ~ 86400 の範囲を取とりうる
	void change(int diff_second) {
		hour += diff_second /3600;
		diff_second %= 3600;
		minute  += diff_second / 60;
		diff_second %= 60;
		second += diff_second;

		if(second  >= 60) {
			minute += 1;
			second -= 60;
		}
		else if(second < 0) {
			minute -= 1;
			second += 60;
		}

		if(minute  >= 60) {
			hour += 1;
			minute -= 60;
		}
		else if(minute < 0) {
			hour -= 1;
			minute += 60;
		}

		if(hour >= 24) {
			hour -= 24;
		}
		else if(hour < 0) {
			hour += 24;
		}
	}
};


// -------------------
// ここから先は変更しない
// -------------------

signed main() {  //int -> signed.
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.stringify() << endl;

  // 時計を進める(戻す)
  clock.change(diff_second);

  // 変更後の時刻を出力
  cout << clock.stringify() << endl;
}
