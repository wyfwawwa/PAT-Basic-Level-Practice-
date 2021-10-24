#include<iostream>
using namespace std;
int main() {
	long long int a, b, c, t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a >> b >> c;
		if (a + b > c)
			cout << "Case #" << i << ": true" << endl;
		else
			cout << "Case #" << i << ": false" << endl;
	}
	return 0;
}