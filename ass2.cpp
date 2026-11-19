//1. WAP in C++ to print multiplication      table of a number in the following format
/*Enter a number 
5imageimage
5 * 1 = 5
5 * 2 = 10
…..
5 * 10 = 50*/
#include<iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n*i << endl;
    }

    return 0;
}

