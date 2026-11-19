//3. WAP in C++ to calculate hours,      minutes, and seconds by inputting seconds as input. For example:
/*INPUT  : Enter the time value in seconds: 3672 
OUTPUT: 1 Hour 1 minute 12 seconds*/
#include<iostream>
using namespace std;
int main()
{
    int seconds, hours, minutes, remaining;
    cout << "Enter the time value in seconds: ";
    cin >> seconds;
    hours = seconds / 3600;
    remaining = seconds % 3600;
    minutes = remaining / 60;
    remaining = remaining % 60;
    cout << hours << " Hour ";
    cout << minutes << " minute ";
    cout << remaining << " seconds";
    return 0;
}

