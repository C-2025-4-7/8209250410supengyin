#include<iostream>
using namespace std;
void paixu(int x[],int n) {
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if (x[j] > x[j + 1]) {
				int temp = x[j];
				x[j] = x[j + 1];
				x[j + 1]=temp;
			}
}
int main() {
	int n;
	cout << "输入数组大小:";
	cin >> n;
	int* x = new int[n];
	cout << "输入数组成员：";
	for (int i = 0;i < n;i++)
		cin >> x[i];
	paixu(x, n);
	cout << "排序后数组：";
	for (int i = 0;i < n;i++)
		cout << x[i]<<" ";
	delete x;
	return 0;
}