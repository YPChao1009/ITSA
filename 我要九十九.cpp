/*
 * �ڭn�E�Q�E.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;
int rround(double a) {                      //�|�ˤ��J
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
			n = rround(n);         //*******�|�ˤ��J********
			time++;
		}
		cout << time << endl;
	}
	system("pause");
	return 0;
}