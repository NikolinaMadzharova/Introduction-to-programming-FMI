
#include <iostream>
using namespace std;

int main()
{
    int hours, minutes;
    cin >> hours >> minutes;
    //seconds
    cout << hours * 60 * 60 + minutes * 60;
}
