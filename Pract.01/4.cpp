#include <iostream>
using namespace std;

int main()
{
    char a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int sum = a + b + c + d + e + f;

    cout << (sum % 3 == 0);
}