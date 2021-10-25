#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++)
	{
		int cout_l = 0, cout_m = 0, cout_r = 0,judge = 0;
		cin >> str;
		bool choose = true;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == 'P' || str[j] == 'A' || str[j] == 'T')
			{
				if (judge == 0 && str[j] == 'A')
					cout_l++;
				else if (judge == 0 && str[j] == 'P')
					judge = 1;
				else if (judge == 1 && str[j] == 'A')
					cout_m++;
				else if (judge == 1 && str[j] == 'T')
					judge = 2;
				else if (judge == 2 && str[j] == 'A')
					cout_r++;
				else choose = false;
			}
			else
			{
				choose = false;
				break;
			}
		}
		if (judge != 2 || cout_l * cout_m != cout_r || cout_m == 0)
			choose = false;
		if (choose)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}