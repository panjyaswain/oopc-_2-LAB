//10.	WAP in C++ to check whether an entered number is a prime or composite number. 

#include<iostream>
using namespace std;

int main()
{
    int n, i, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(n <= 1)
        cout << "Neither Prime nor Composite";
    else if(count == 2)
        cout << "Prime Number";
    else
        cout << "Composite Number";

    return 0;
}

