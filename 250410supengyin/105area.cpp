#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double c, f;
	cin >> f;
	c = 5 * (f - 32) / 9;
	std::cout << std::setprecision(4) << c << std::endl;
	return 0;
}