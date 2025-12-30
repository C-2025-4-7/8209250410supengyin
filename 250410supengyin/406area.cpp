#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0;i < 26;i++)
		counts[i] = 0;
	for (int i = 0;s[i] != '\0';i++) {
		char c = s[i];
		if (c >= 'A' && c <= 'Z') c = c + 32;
		if (c >= 'a' && c <= 'z') {
			int t = c - 'a';
			counts[t]++;
		}
	}
}
int main() {
	char s[10000];
	int counts[26];
	//for (int i = 0;i <= 10000;i++)
		//cin >> s[i];
	cin.getline(s, 10000);
	count(s, counts);
	for (int i = 0;i < 26;i++)
		if (counts[i] > 0)
			cout << char('a' + i) << ":" << counts[i] << endl;
	return 0;
}