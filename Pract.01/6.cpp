#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    bool isFibonacciSequence = (c == a + b) && (d == b + c) && (e = c + d);

    cout << isFibonacciSequence;

}


