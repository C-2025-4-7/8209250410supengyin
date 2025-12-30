#include<iostream>
using namespace std;
int peach(int day) {
	if (day == 10) {
		return 1;
	}
	else {
		return 2 * (peach(day + 1) + 1);
	}
}
int main() {
	int sum = peach(1);
	cout << sum;
}