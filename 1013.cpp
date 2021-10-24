#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int m, n, k = 1, a[1000] = {0}, count = 0;
	bool flag = true;
	cin >> m >> n;
	for (int i = 2; i <1000; i++) {
		for (int j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			a[k++] = i;	
		}
		flag = true;

	}
	for (m; m <= n; m++) {
		count++;
		cout << a[m];
		if (count % 10 != 0&&a[m+1]!=0)
		{
			cout << " ";
		}
		else
			cout << endl;
	}
	return 0;
}