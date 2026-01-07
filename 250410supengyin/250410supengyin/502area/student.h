#ifndef STUDENT_H 
#define STUDENT_H
class Student              
{
public: 
	void display();
	void set_value();
	void given(int a,const char b[], char c);
private:
	int num;
	char name[20];
	char sex;
};
#endif
