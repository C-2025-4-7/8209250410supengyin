#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	if (!s1 || !s2)return -1;
	if (s1[0] == '\0')return 0;
	for (int i = 0;s2[i];i++) {
		int j = 0;
		while (s1[j] == s2[i + j]) {
			j++;
		}
		if (s1[j] == '\0') return i;
	}
	return -1;
}
int main() {
	char s1[100], s2[100];
	cin >> s1 >> s2;
	cout << indexOf(s1, s2);
	return 0;
}