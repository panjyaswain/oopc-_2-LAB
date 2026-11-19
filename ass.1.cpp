//Write a program in C++ to find the sum of the first 10 natural numbers?

#include<iostream>
using namespace std;

int main()
{
    int i, sum = 0;

    for(i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}

