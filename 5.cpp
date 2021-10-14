#include<iostream>
using namespace std;
double s1(double v, double t) {
	return v * t;
}
int main() {
	double v, t; //
	cin >> v >> t;
	cout << s1(v, t) << ' ' << 0.5*(s1(v, t)) << ' ' <<1.5*s1(v,t) ;
}