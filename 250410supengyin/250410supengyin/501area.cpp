#include<iostream>
using namespace std;
class Time {
	private:
		int hour;
		int minute;
		int sec;
	public:
		void settime(){
			cin >> hour;
			cin >> minute;
			cin >> sec;
		}
		void showtime(){
			cout << hour <<":" << minute <<":" << sec;
		}
};
int main(){
	Time t;
	t.settime();
	t.showtime();
	return 0;
}