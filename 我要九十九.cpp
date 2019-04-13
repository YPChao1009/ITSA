/*
 * 我要九十九.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;
int rround(double a) {                      //四捨五入
	if (a - floor(a) >= 0.5)
		return floor(a)+1;
	else if (a - floor(a) < 0.5)
		return floor(a);
}

int main() {
	double n;
	while (cin >>n&& n!=-1) {
		int time = 0;
		while (n != 99) {
			n = sqrt(n);
			n *= 10;
			n = rround(n);         //*******四捨五入********
			time++;
		}
		cout << time << endl;
	}
	system("pause");
	return 0;
}