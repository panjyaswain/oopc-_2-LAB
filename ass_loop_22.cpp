//14.	WAP in C++ to Display the binary equivalent of an entered decimal number. 

#include<iostream>
using namespace std;

int main()
{
    int n, rem, binary = 0, place = 1;

    cout << "Enter a decimal number: ";
    cin >> n;

    while(n > 0)
    {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    cout << "Binary number = " << binary;

    return 0;
}

