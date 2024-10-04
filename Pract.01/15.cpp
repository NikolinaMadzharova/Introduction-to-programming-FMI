#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int firstDigit = a / 1000;
    a %= 1000;
    int secondDigit = a / 100;
    a %= 100;
    int thirdDigit = a / 10;
    a %= 10;
    int fourthDigit = a;

    cout << firstDigit * secondDigit * thirdDigit * fourthDigit << endl;
    cout << (firstDigit + secondDigit + thirdDigit + fourthDigit) / 4.0;
}


