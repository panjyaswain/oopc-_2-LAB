//WAP in C++ to swap the values of 2      variables using 3rd variable ?

#include<iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b;

    return 0;
}

