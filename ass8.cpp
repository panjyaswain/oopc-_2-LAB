//WAP in C++ to display all      Armstrong numbers within a given range.//

#include<iostream>
using namespace std;

int main()
{
    int start, end, i, n, digit, sum;

    cout << "Enter starting range: ";
    cin >> start;

    cout << "Enter ending range: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for(i = start; i <= end; i++)
    {
        n = i;
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit * digit * digit;
            n = n / 10;
        }

        if(sum == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}

