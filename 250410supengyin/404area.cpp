#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2,int list3[]) {
	int* listall = new int[size1 + size2];
	for (int j = 0;j < size1;j++)
		listall[j] = list1[j];
	for (int k = size1;k < size1 + size2;k++)
		listall[k] = list2[k - size1];
	for (int p = 0;p < size1 + size2 - 1;p++)
		for (int q = 0;q < size1 + size2 - p - 1;q++)
			if (listall[q] > listall[q + 1]) {
				int temp;
				temp=listall[q];
				listall[q] = listall[q + 1];
				listall[q + 1] = temp;
			}
	for (int r = 0;r < size1 + size2;r++)
		list3[r] = listall[r];
	delete[]listall;
}
int main() {
	cout << "数组1，数组长度开头:" << endl;
	int size1, size2;
	cin >> size1;
	int* list1 = new int[size1];
	for (int j = 0;j < size1;j++)
		cin >> list1[j];
	cout << endl;
	cout << "数组2，数组长度开头:" << endl;
	cin >> size2;
	int* list2 = new int[size2];
	for (int i = 0;i < size2;i++)
		cin >> list2[i];
	cout << endl;
	int* list3 = new int[size1 + size2];
	merge(list1, size1, list2, size2,list3);
	cout << "新数组：" << endl;
	for (int s = 0;s < size1 + size2;s++)
		cout << list3[s] << '\t';
	return 0;
}