#include<iostream>
using namespace std;
int chet(int a){
	int k;
	k = a & 1;
	if (k == 0) {
		return 1;
	}
	else return 0;
}
int umn_8(int b) {
	return b << 3;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << chet(a)<<endl;
	cout << umn_8(b)<<endl;
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	cout << a<< ' ' << b<<endl;
}