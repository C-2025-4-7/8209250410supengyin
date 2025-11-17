#include<iostream>
using namespace std;
int main()
{
	double a,b,c,d;
	d = 0;
	for (a = 2;a < 100;a = a * 2)
		b = 2 + a,d++;
	c = 0.8 * b / d;
	cout << c;
	return 0;
}