#include <iostream>

using namespace std;

// 函数声明
int foo(int);

// 函数定义
int foo(int n)
{
    int res = 1;
    for (int i = 0; i <= n; i ++ ) res *= i;

    return res; 
}

// 等与在函数内部开了一个只有该函数可以用的全部变量
int output()
{
    static int cnt;
}

int main()
{

}