#include<iostream>
#include"student.h"
using namespace std;
void Student::display(){
    if(num<10) cout<< "num£º" <<"00" << num << endl;
    else if(num<100) cout << "num£º" << "0" << num << endl;
    else cout << "num£º" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value(){
    cin >> num;
    cin >> name;
    cin >> sex;
}
void Student::given(int a,const char b[], char c) {
    num = a;
    int i;
    for (i = 0; b[i] != '\0' && i < 19; i++) {
        name[i] = b[i];
    }
    name[i] = '\0';
    sex = c;
}