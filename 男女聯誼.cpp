/*
 * 男女聯誼.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>

using namespace std;


int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int k = 0;
		cin >> k;
		string list;
		cin >> list;
		string org = list;

		int choice = 0;
		cin >> choice;
		while (choice != 0)
		{
			list = org;
			if (choice == 1)
			{
				char a, b;
				cin >> a >> b;
				for (int i = 0; i < k; i++)
				{

					if (list[i] == a)
						list[i] = ' ';
					if (list[i] == b)
						list[i] = ' ';
				}
			}
			else if (choice == 2)
			{
				int x, y;
				cin >> x >> y;
				for (int i = x - 1; i <= y - 1; i++)
				{
					list[i] = ' ';
				}
			}
			else if (choice == 3)
			{
				int z, h;
				cin >> z >> h;
				for (int i = z - 1; i <= h - 1; i++)
				{
					list[i] = ' ';
				}

				char s;
				cin >> s;
				for (int i = 0; i < k; i++)
				{
					if (list[i] == s)
						list[i] = ' ';
				}
			}

			int Men_notInterested[100];
			int girl = 0;
			for (int i = 0; i < list.length(); i++)
			{
				if (list[i] == ' ')
				{
					Men_notInterested[girl] = i + 1;
					girl++;
				}
			}

			for (int i = 0; i < girl; i++)
			{
				cout << Men_notInterested[i];
				if (i != girl - 1)
					cout << " ";
			}

			cout << endl;

			cin >> choice;
		}


	}

	return 0;
}
