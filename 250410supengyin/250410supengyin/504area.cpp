#include<iostream>
using namespace std;
class student{
public:
	int num[5];
	int grade[5];
	void max(int x[],int y[], int n, int& a, int& b) {
		for (int i = 0;i < n - 1;i++)
			for (int j = 0;j < n - i - 1;j++)
				if (x[j] > x[j + 1]) {
					int temp;
					temp = x[j];
					x[j] = x[j + 1];
					x[j + 1] = temp;
					int temp1;
					temp1 = y[j];
					y[j] = y[j + 1];
					y[j + 1] = temp1;
				}
		a = x[n - 1];
		b = y[n - 1];
	};
	void setgrade() {
		for (int i = 0;i < 5;i++)
			cin >> grade[i];
	}
	void setnum() {
		for (int j = 0;j < 5;j++)
			cin >> num[j];
	}
};
int main() {
	student s;
	cout << "输入五人成绩：";
	s.setgrade();
	cout << "输入对应学号：";
	s.setnum();
	int maxnum, maxgrade;
	s.max(s.grade, s.num, 5, maxgrade, maxnum);
	cout << "最高成绩：" << maxgrade << endl;
	cout << "他的学号：" << maxnum;
	return 0;
}