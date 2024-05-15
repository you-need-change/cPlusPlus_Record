#include <iostream>
#include <cstdio>

using namespace std;

void fun(int*, int**);

int main()
{
    fun();

    return 0;
}

void fun(int *arg, int **kwds)
{
    printf("%d", *arg);
}