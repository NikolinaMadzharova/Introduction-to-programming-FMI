#include <iostream>
using namespace std;

int main()
{
	int a, b, x;
	cin >> a >> b >> x;

	bool isXInTheInterval = x > a && x <= b;
	cout << isXInTheInterval;
}

