#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int age;
	string name,
		   city,
		   college,
		   profession,
		   animal,
		   petName;
	
	cout << "Enter any name: ";
	getline(cin, name);
	cout << "Enter any city: ";
	getline(cin, city);
	cout << "Enter any age: ";
	cin >> age;
	cout << "Enter any college name: ";
	cin >> college;
	cout << "Enter any profession: ";
	cin >> profession;
	cout << "Enter any animal: ";
	cin >> animal;
	cout << "Enter any name for the pet: ";
	cin >> petName;
	
	
	cout << "\n\n" << "There once was a person named " << name << " who lived in " << city <<
		  ". At the age of " << age << ", " << name << " went to college at " << college <<
		  ". " << name << " graduated and went to work as a " << profession << ". Then, " <<
		  name << " adopted a(n) " << animal << " named " << petName << ". They both lived " 
		  "happily ever after!" << endl;
	
	return 0;
}
