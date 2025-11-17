#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char c;
    int intA, intB;
	cout << "输入第一个数";
	cin >> a;
	cout << "选择运算方式";
	cin >> c;
	cout << "输入第二个数";
	cin >> b;
    switch (c) {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        if (b == 0) {
            cout << "错误：除数不能为0！";
        }
        else {
            cout << a << " / " << b << " = " << a / b;
        }
        break;
    case '%':
        intA = static_cast<int>(a);
        intB = static_cast<int>(b);
        if (intB == 0) {
            cout << "错误：取模运算的除数不能为0！";
        }
        else {
            cout << intA << " % " << intB << " = " << intA % intB;
        }
        break;
    default:
        cout << "错误：运算符 '" << c << "' 非法！";
        cout << endl << "支持的运算符: +, -, *, /, %";
        break;
    }
	return 0;
}