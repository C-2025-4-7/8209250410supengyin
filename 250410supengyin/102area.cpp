#include<iostream>
const double PI = 3.141592653589793;
using namespace std;
int main()
{
	double r, h;
	cin >> r >> h;
	double V;
	V = PI * r * r * h / 3;
	cout << V;
	return 0;

}