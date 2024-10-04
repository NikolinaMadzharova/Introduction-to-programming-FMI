#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    bool isEven = num % 2 == 0;

    cout << isEven * num / 2 + !isEven * num * 3<<endl;


}

