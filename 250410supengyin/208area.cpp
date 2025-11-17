#include<iostream>
using namespace std;
int main()
{
	double a, x,y;
	cin >> a;
	if (a < 0) a = fabs(a);
	if (a == 0) cout << 0;
	x = a;
	y = (a + x / a) / 2;
	while (fabs(x - y) >= 1e-5) {
		x = y;
		y = (x + x / a) / 2;
	}
	cout << y;
	return 0;
}