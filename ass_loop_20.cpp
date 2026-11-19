//12.	WAP in C++ to Check whether an entered number is an Armstrong number or not

#include<iostream>
using namespace std;

int main()
{
    int n, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if(original == sum)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}

