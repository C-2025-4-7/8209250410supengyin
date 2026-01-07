#include<iostream>
using namespace std;
class volume {
private:
	int length;
	int width;
	int height;
	int v;
public:
	void set() {
		cin >> length;
		cin >> width;
		cin >> height;
	};
	void calculate() {
		v = length * width * height;
	};
	void show() {
		cout << v << endl;
	};
};
int main() {
	volume v1;volume v2;volume v3;
	v1.set();
	v2.set();
	v3.set();
	v1.calculate();
	v2.calculate();
	v3.calculate();
	v1.show();
	v2.show();
	v3.show();
	return 0;
}