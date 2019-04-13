/*
 * The Typhoon.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int arr[3][3];
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				cin >> arr[j][k];
			}
		}int total = 0;
		int a = arr[0][0];
		int b = arr[0][1];
		int c = arr[0][2];
		int d = arr[1][0];
		int e = arr[1][1];
		int f = arr[1][2];
		int g = arr[2][0];
		int h = arr[2][1];
		int l = arr[2][2];
		
			total=a * e * l + d * h * c + g * b * f - c * e * g - b * d * l - a * f * h;
		cout << total << endl;
	}

	system("pause");
	return 0;
}