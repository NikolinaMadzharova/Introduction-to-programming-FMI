#include <iostream>
using namespace std;

int main()
{
    int seconds;
    cin >> seconds;

    int secondsPerDay = 24 * 60 * 60;
    int days = seconds / secondsPerDay;
    seconds %= secondsPerDay;

    int hours = seconds / 3600;
    seconds %= 3600;

    int minutes = seconds / 60;
    seconds %= 60;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds";

    

}
