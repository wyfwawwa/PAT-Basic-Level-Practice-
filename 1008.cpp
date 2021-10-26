#include<iostream>
using namespace std;
int main() {
	int n, m;
	int v[210] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	m = m % n;
	for (int i = 0; i < n - m; i++)
	{
		v[i + n] = v[i];
		v[i] = 0;
	}
	for (int i = 0; i < n + n - m; i++)
	{
		if (v[i] == 0)
			continue;
		else
			cout << v[i];
		if (v[i + 1] != 0)
			cout << " ";
	}
	return 0;
}