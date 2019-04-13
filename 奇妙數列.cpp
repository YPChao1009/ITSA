/*
 * ©_§®¼Æ¦C.cpp
 * Author:Yun Pei Chao 
 */
#include <iostream>
#include <set>

using namespace std;

int main() {
	int num;
	while (cin >> num) {
		set<int> S;
		S.insert(1);
		for (int T = 2; S.size() != num; T++) {
			set<int>::iterator search = S.find(T);
			if (search == S.end()) {
				S.insert(*S.rbegin() + T);
			}
		}
		cout << *S.rbegin() << endl;
	}
}