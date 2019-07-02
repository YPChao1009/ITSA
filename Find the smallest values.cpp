/*
 * Find the smallest values.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		int x = 0, y = 0;
		cin >> a >> b;
		
			x = b;
			y = a;
			for (int j = x; j > 0; j--) {
				for (int k = y; k >0 ; k--) {

					if (a*j - b * k == 1) {
						cout << j << " " << k << endl;
						break;
					}
					else if ((j == 1) && (k == 1) && (a*j - b * k != 1)) {
						cout << "No solution!\n";
						break;
					}
				}
			}
		//}
	}


	
	return 0;
}
