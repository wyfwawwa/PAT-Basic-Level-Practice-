#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int count = 0, n, a[10000], k = 1;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		bool flag = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			a[k] = i;
			k++;
		}

	}
	for (int i = 1; i <= k; i++) {
		if (a[i + 1] - a[i] == 2)
			count++;
	}
	cout << count;
	return 0;
}