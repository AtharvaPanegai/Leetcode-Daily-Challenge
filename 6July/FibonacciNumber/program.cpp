#include "bits/stdc++.h"
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;

    int left = fib(n - 1);
    int right = fib(n - 2);

    return left + right;
}

int main()
{

    return 0;
}