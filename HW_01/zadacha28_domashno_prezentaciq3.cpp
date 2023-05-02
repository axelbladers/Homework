#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
 
	double avocadoPrice = 1.23;
	int avocados;
	double oilBottlePrice = 2.53;
	int oilBottles;
	double tomatoes_perKg = 0.27;
	double tomatoes;
	double onion_perKg = 0.15;
	double onions;
	double lemons_perKg = 8.99;
	double lemons;
	double obshta_smetka = 0;

	cout << "How many avocados do you want to get? " << endl;
	cin >> avocados;
	obshta_smetka += avocados * avocadoPrice;

	cout << "How many bottles of oil do you want to get? " << endl;
	cin >> oilBottles;
	obshta_smetka += oilBottles * oilBottlePrice;

	cout << "How many tomatoes (in kg) do you want to get? " << endl;
	cin >> tomatoes;
	obshta_smetka += tomatoes * tomatoes_perKg;

	cout << "How many onions (in kg) do you want to get? " << endl;
	cin >> onions;
	obshta_smetka += onions * onion_perKg;

	cout << "How many lemons (in kg) do you want to get? " << endl;
	cin >> lemons;
	obshta_smetka += lemons * lemons_perKg;

	double obshta_smetkaRounded = std::round(obshta_smetka * 100) / 100;
	cout << "Your total comes out to: " << obshta_smetkaRounded;
		
	return 0;
}