//WAP in C++ to print the numbers that are divisible by 3 but not divisible by 7 in the range 1 to 500

#include<iostream>
using namespace std;

int main()
{
    int i;

    cout << "Numbers are: ";

    for(i = 1; i <= 500; i++)
    {
        if(i % 3 == 0 && i % 7 != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}

