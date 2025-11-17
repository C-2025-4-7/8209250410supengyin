#include<iostream>
using namespace std;
int min(int x, int y)
{
	int z;
	z = (x < y) ? x : y;
	return z;
}
int main()
{
	int a, b, p, q;
	cin >> a >> b;
	p = min(a, b);
	int x = a % p, y = b % p;
	for (p = min(a, b);a%p != 0 || b%p!= 0; p--)
		if (x=0,y = 0) break;
	cout << p << endl;
	q = a * b / p;
	cout << q;
	return 0;
}
