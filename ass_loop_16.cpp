//8.	WAP in C++ to print all odd numbers in a given range. 

#include<iostream>
using namespace std;

int main()
{
    int start, end, i;

    cout << "Enter starting range: ";
    cin >> start;

    cout << "Enter ending range: ";
    cin >> end;

    cout << "Odd numbers are: ";

    for(i = start; i <= end; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}

