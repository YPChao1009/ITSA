/*
 * 線段切割.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int total = 0;
		int sum = 0;
		for (int i = 1; i < n; i++) {
			if (sum + i > n) {
				break; }
			else{
				sum += i;
				total++;
			}
		}
		cout << total << endl;
	}
	
	
	return 0;
}
