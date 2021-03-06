// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include <iostream>
using namespace std;

double abs(double x)
{
	if (x >= 0) {
		return x;
	}
	else {
		return -x;
	}
}

int main()
{
	double N, T, A, H[100000];
	double temp, ans, num = 0;

	//入力部分
	cin >> N;
	cin >> T >> A;
	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}

	//計算部分
	for (int i = 0; i < N; i++) {
		temp = T - H[i] * 0.006;
		if (i == 0) {
			ans = abs(temp - A);
		}
		else if (abs(temp - A) <= ans) {
			ans = abs(temp - A);
			num = i;
		}
	}
	
	//出力部分
	cout << num + 1 << endl;

	return 0;
}