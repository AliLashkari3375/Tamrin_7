// fibonacci 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
////Ali lashkari

#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int n ;
    cout << "enter your num: ";
    cin >> n;
    cout <<"your answer is "<<fib(n);
    return 0;
}

int fib(int n)
{
	if (n <= 1)return n;
	return fib(n - 1) + fib(n - 2);
}//Ali lashkari
