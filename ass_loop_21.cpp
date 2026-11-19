//13.	WAP in C++ to Print all natural numbers in descending order up to 1 from an entered number except the numbers divisible by 7 (use continue statement) 

#include<iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers are: ";

    for(i = n; i >= 1; i--)
    {
        if(i % 7 == 0)
        {
            continue;
        }

        cout << i << " ";
    }

    return 0;
}

