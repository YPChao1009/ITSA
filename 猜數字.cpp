/*
 * ²q¼Æ¦r.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string ans;
	string guess;
	int A = 0, B = 0;
	cin >> ans;
	while (cin >> guess)
	{
		if (guess != "0000")
		{
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (i == j && ans[i] == guess[j])
					{
						A++;
					}
					else if (i != j && ans[i] == guess[j])
					{
						B++;
					}
				}
			}
			cout << A << "A" << B << "B" << endl;
			A = 0;
			B = 0;
		}
		else
		{
			break;
		}
	}
	return 0;
}