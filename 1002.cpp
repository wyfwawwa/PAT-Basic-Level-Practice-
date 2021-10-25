#include<iostream>
using namespace std;
int main()
{
	int sum = 0,a[3],j=0;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
		sum += str[i] - '0';
	
	while (sum > 0)
	{
		a[j] = sum % 10;
		sum /=10;
		j++;
	}
	for (int i = j - 1; i >= 0; i--)
	{
		if (i != j - 1)
			cout << " ";
		switch (a[i])
		{
		case 0:cout << "ling"; break;
		case 1:cout << "yi"; break;
		case 2:cout << "er"; break;
		case 3:cout << "san"; break;
		case 4:cout << "si"; break;
		case 5:cout << "wu"; break;
		case 6:cout << "liu"; break;
		case 7:cout << "qi"; break;
		case 8:cout << "ba"; break;
		case 9:cout << "jiu"; break;
		}
	}
	
		
	return 0;
}