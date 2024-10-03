#include <iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;
	int expression1 = a + b;
	int expression2 = a - b;

	int result = expression1 * expression1 * expression1 * expression1 - expression2 * expression2;
	cout << result << endl;
}