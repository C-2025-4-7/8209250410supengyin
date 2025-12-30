#include<iostream>
using namespace std;
void bubble(double x[],int n) {
	for(int k=0;k<n-1;k++)
		for (int j=0;j < n - 1-k;j++)
			if (x[j] > x[j + 1]) {
				double i;
				i = x[j];
				x[j] = x[j + 1];
				x[j + 1] = i;
			}
}
int main() {
	int n = 10;
	double arr[10];
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	bubble(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}