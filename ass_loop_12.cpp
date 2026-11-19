//WAP in C++ to find      Fibonacci series up to an entered number using do-while loop. 
/*Test data: Entered number=90 
Output series: 0 1 1 2 3 5 8 13 21 34 55 89*/

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

