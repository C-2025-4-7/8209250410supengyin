#include<iostream>
using namespace std;
bool is_prime(int num){
	if (num <= 1)
		return false;
	if (num == 2)
		return true;
	if(num>2)
		for (int t = num-1;t > 1;t--) {
			if (num % t == 0)
				return false;
		}
	return true;
}
int main() {
	int total = 0;
	int perrow = 0;
	int num = 2;
	while (total <200) {
		if (is_prime(num)) {
			cout << "\t" << num;
			perrow++;
			total++;
		}
		if (perrow == 10) {
			cout << endl;
			perrow = 0;
		}
		num++;
	}
	return 0;
}