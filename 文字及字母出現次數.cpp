/*
 * ��r�Φr���X�{����.cpp
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
	int arr[26] = { 0 };     //�j�g
	int arr1[26] = { 0 };    //�p�g
	int count = 1;
		for(int i=0;i<s.size();i++){
			if (s[i] >= 'A' && s[i] <= 'Z') {            //��r�����Ӽ�
				arr[s[i] - 'A']++;
			}
			else if (s[i] >= 'a' && s[i] <= 'z') {      //��r�����Ӽ�
				arr[s[i] - 'a']++;
			}
			else if (s[i] == ' ') {              //��r���Ӽ�
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