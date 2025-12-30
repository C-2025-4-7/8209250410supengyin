#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
	cout << "Celsius" << '\t' << " Fahrenheit" << '\t' << "|" << '\t' << "Fahrenheit" << '\t' << " Celsius"<<endl;
	double cel1 = 40.0, fah1 = 120.0;
	for (;cel1 >= 31.0;cel1 = cel1 - 1.0) {
		cout << cel1 << '\t' << celsius_to_fah(cel1) << '\t' << '\t' << "|" << '\t' << fah1 << '\t'<<'\t' << fixed << setprecision(2) << fahrenheit_to_cels(fah1) << endl;
		fah1 = fah1 - 10.0;
	}
	return 0;
}
