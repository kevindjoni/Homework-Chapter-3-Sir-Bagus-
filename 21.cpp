#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	float diameter,
		  radius, 
		  area;
	const int pi = 3.14159;
	int slices;
	const float sliceArea = 14.125;
	int totalSlices,
		totalPizza,
		people;
		
	cout << "Enter the pizza diameter in inches: "; 
	cin >> diameter;
	cout << "Enter the number of people: ";
	cin >> people;
	
	radius = diameter / 2;
	area = pi * pow(radius, 2);
	slices = area / sliceArea;
	
	cout << slices << " slices of pizza may be taken." << endl;
	
	totalSlices = people * 4;
	totalPizza = totalSlices / slices;
	
	cout << "Therefore, you should buy " << totalPizza << " pizza.";
	
	return 0;
}
