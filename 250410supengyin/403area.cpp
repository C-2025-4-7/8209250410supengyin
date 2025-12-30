#include <iostream>
using namespace std;

int main() {
    const int TOTAL = 100;
    bool lockers[TOTAL] = { false };  
    for (int student = 1; student <= TOTAL; student++) {
        for (int locker = student - 1; locker < TOTAL; locker += student) {
            lockers[locker] = !lockers[locker];
        }
    }
    bool first = true; 
    for (int i = 0; i < TOTAL; i++) {
        if (lockers[i]) {  
            if (!first) {
                cout << " ";  
            }
            cout << (i + 1); 
            first = false;
        }
    }
    return 0;
}