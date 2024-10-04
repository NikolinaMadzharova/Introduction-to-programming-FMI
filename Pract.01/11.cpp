#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int firstDigit = number / 100;
    number %= 100;
    int secondDigit = number / 10;
    number %= 10;
    int thirdDigit = number;

    int reversedNum = thirdDigit * 100 + secondDigit * 10 + firstDigit;
    cout << ++reversedNum << endl;

}
