#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	N %= 1000;
	N /= 100;

	cout << N;

}


