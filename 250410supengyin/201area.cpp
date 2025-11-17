#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		char b = a - 32;
		cout << b;
	}
	else {
		char c = a + 1;
		cout <<(int) c;
	}
	return 0;
}