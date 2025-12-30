#include<iostream>
using namespace std;
struct timu
{
	int t;
	int p;
};
timu gongyue(int x,int y){
	timu result;
	int temp_t = (x < y) ? x : y;
	for (;temp_t > 0;temp_t--) {
		if (x % temp_t == 0 && y % temp_t == 0) {
			result.t = temp_t;break;
		}
	}	
	result.p = x * y / result.t;
	return result;
	
}
int main() {
	int a, b;
	cin >> a >> b;
	timu result= gongyue(a, b);
	cout <<"最大公约数是"<< result.t<<endl;
	cout << "最小公倍数是" << result.p << endl;
	return 0;
}