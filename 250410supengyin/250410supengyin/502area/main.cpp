#include <iostream>      
#include"student.h"
int main()
{
	Student stud;   
	stud.set_value();
	Student stud1;
	stud1.given(007,"tcg", 'm');
	stud.display();    
	stud1.display();
	return 0;
}