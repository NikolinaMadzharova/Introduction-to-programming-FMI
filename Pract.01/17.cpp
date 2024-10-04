#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;

    bool isXBigg = x >= 'A' && x <= 'Z';

    x = isXBigg * (x - 'A' + 'a') + (!isXBigg) * (x - 'a' + 'A');


    //isXBigg && (x = x - 'A' + 'a') || (x = x - 'a' + 'A');
    cout << x;
}

