#include<iostream>
using namespace std;
void f(int n)
{
	if (n % 2 == 0)
	{
		cout << "sin(x)";
	}
	else cout << "-sin(x)";
}
int main()
{
	int n;
	cin >> n;
	f(n);
}