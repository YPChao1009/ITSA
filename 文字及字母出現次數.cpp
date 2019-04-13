/*
 * ゅのダ瞷Ω计.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<string>
#include <sstream> 
#include<vector>
using namespace std;

int main() {
	
	string s;
	
	while (getline(cin, s)) {
	int arr[26] = { 0 };     //糶
	int arr1[26] = { 0 };    //糶
	int count = 1;
		for(int i=0;i<s.size();i++){
			if (s[i] >= 'A' && s[i] <= 'Z') {            //衡ダ计
				arr[s[i] - 'A']++;
			}
			else if (s[i] >= 'a' && s[i] <= 'z') {      //衡ダ计
				arr[s[i] - 'a']++;
			}
			else if (s[i] == ' ') {              //衡计
				count++;
			}
		}
		cout << count << endl;
		
		for (int i = 0; i < 26; i++) {
			if (arr[i] != 0) {
				cout << (char)('A' + i) << ":" << arr[i] << endl;
			}
			else if (arr1[i] != 0) {
				cout << (char)('a' + i) << ":" << arr1[i] << endl;
			}
		}

		
	}
	system("pause");
	return 0;
}