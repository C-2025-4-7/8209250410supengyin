#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c; 
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "gun";
    }
    else if (a == b && b == c) {  
        cout << "dengbian " << a + b + c;
    }
    else {
        cout << a + b + c;  
    }

    return 0;
}