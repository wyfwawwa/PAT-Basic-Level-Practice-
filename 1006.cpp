#include <iostream>
#include<string>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	c=n%10;
	b=(n/10)%10;
	a=n/100;
	for(int i=0;i<a;i++)
		cout<<"B";
	for(int i=0;i<b;i++)
		cout<<"S";
	for(int i=1;i<=c;i++)
		cout<<i;
	cout<<endl;
	return 0;
}
