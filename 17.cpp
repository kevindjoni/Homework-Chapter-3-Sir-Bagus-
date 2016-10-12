#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	unsigned seed = time(0);
	srand (seed);
	
	int num1,
		num2,
		total,
		maxNumber = 999,
		minNumber = 100;
	
	num1 = (rand() % (maxNumber - minNumber + 1)) + minNumber;
	num2 = (rand() % (maxNumber - minNumber + 1)) + minNumber;
	
	cout << setw(5) << num1 << endl;
	cout << setw(5) << num2 << endl;
	cout << "+____" << endl << " ";
	cin >> total;
	
	if(total == num1 + num2)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "Your answer is wrong, the answer is supposed to be "
			 << num1 + num2 << endl;
	}
	
	return 0;
}
