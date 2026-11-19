//Write a program to test the operation of scope resolution operator?

#include<iostream>
using namespace std;

int a = 100;

int main()
{
    int a = 50;

    cout << "Local value of a = " << a << endl;
    cout << "Global value of a = " << ::a;

    return 0;
}

