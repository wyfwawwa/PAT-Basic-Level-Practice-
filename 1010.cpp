#include<iostream>
using namespace std;
int main() {
	int a, b;
	bool flag = true;
	while (cin >> a >> b) {
		if (b != 0) {
			if (flag) {
				cout << a * b << " " << b - 1;
				flag = false;
			}
			else
				cout << " " << a * b << " " << b - 1;
			char c = getchar();
			if (c == '\n')
				break;
		}

		if (flag)
			cout << "0 0";
	}
	return 0;

}