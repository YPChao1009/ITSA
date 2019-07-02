/*
 * 字母往前移.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main() {                               
	string  str;
	int n;
	getline(cin, str);
	cin >> n;
	string str1;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A'&&str[i] <= 'Z') {
			if (char(str[i] + n) >= 'Z') {
				str1 += char(str[i] + n) - 'Z'-1+ 'A';
			}
			else
				str1 += char(str[i] + n);
		}
		else if (str[i] >= 'a'&&str[i] <= 'z') {
			if (char(str[i] + n) >= 'z') {
				str1 += char(str[i] + n) - 'z'-1+ 'a';
			}
			else
				str1 += char(str[i] + n);
		}

		else if (str[i] == ' ') {
			str1 += ' ';
		}
		else if (str[i] >= '0'&&str[i] <= '9') {
			if (char(str[i] + n) >= '9') {
				str1 += char(str[i] + n) - '9'-1 + '0';
			}
			else
				str1 += char(str[i] + n);
		}
	
		else {
			str1 += str[i];
		}
	}
	cout << str1 << endl;
	
	return 0;
}
