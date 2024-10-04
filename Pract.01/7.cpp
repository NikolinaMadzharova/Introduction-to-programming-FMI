#include <iostream>
using namespace std;

int main()
{
	int grade;
	cin >> grade;

	bool isValid = grade >= 2 && grade <= 6;

	cout << isValid;
}


