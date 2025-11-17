#include<iostream>
using namespace std;
int main()
{
	float x,y;
	x > 0;
	cin >> x;
	if (x > 0 && x < 10) {
		if (x < 1)
			cout << 3 - 2 * x;
		else if (x < 5)
			cout << 2 / (4 * x);
		else if (x < 10) cout << x * x;
	}
	else cout << "404error";
	return 0;
}