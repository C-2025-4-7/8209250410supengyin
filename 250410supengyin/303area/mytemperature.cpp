#include<iostream>
#include"mytemperature.h"
using namespace std;
double celsius_to_fah(double cel) {
	cel = 1.8 * cel + 32;
	return cel;
}
double fahrenheit_to_cels(double fah) {
	fah = (fah - 32) / 1.8;
	return fah;
}