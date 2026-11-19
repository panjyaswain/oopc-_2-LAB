//9.	WAP in C++ to find sum of all even numbers in a given range. 

#include<iostream>
using namespace std;

int main()
{
    int start, end, i, sum = 0;

    cout << "Enter starting range: ";
    cin >> start;

    cout << "Enter ending range: ";
    cin >> end;

    for(i = start; i <= end; i++)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    cout << "Sum of even numbers = " << sum;

    return 0;
}

