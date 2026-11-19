//16.	WAP in C++ to Compute reverse of a number and check whether the number is palindrome or not. 

#include<iostream>
using namespace std;

int main()
{
    int n, original, digit, rev = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    cout << "Reverse = " << rev << endl;

    if(original == rev)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}

