#include <iostream>
using namespace std;

int parseHex(const char* const hexString) {
    int decimal = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {
        char c = hexString[i];
        int digitValue = 0;
        if (c >= '0' && c <= '9') {
            digitValue = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            digitValue = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            digitValue = c - 'a' + 10;
        }
        else {
            return -1;
        }
        decimal = decimal * 16 + digitValue;
    }
    return decimal;
}
int main() {
    const char* test1 = "A5";
    cout<<parseHex(test1);
}