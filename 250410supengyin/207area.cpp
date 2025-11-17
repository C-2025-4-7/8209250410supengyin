#include<iostream>
using namespace std;
int main()
{
    int hangshu = 5;
    for (int hang = 1;hang <= hangshu; hang++) {
        for (int xingshu = 1;xingshu <= hang;xingshu++) {
            cout << "*";
        }
        cout << endl;
        
        }
    return 0;
    
}
