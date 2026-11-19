//WAP in C++ to find      the sum of all user entered numbers until the sum exceeds 100 using do      while loop.

#include<iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci series: ";

    do
    {
        if(a <= n)
        {
            cout << a << " ";
        }

        c = a + b;
        a = b;
        b = c;

    } while(a <= n);

    return 0;
}

