/*
 * °°³yªºª÷¹ô!!.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {
	//Divide&Conquer
	int N;
	int coin;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> coin;
		cout << ceil(log(coin) / log(3))<<endl;
	}
	system("pause");
	return 0;
}