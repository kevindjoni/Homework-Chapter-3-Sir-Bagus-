#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	float angle,
		  sinAngle,
		  cosAngle,
		  tanAngle;
		  
	cout << "Enter the angle in radian: " << endl;
	cin >> angle;
	
	sinAngle = sin(angle);
	cosAngle = cos(angle);
	tanAngle = tan(angle);
		  
	cout << fixed << setprecision(4) << showpoint;
	cout << "The sine will be " << sin(angle) << endl;
	cout << "The cosine will be " << cos(angle) << endl;
	cout << "The tangent will be " << tan(angle) << endl;
	
	return 0;
}
