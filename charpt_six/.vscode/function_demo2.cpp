#include <iostream>

using namespace std;

// 引用
int max(int &x, int &y)
{
    x = 10, y = 20;

    if (x > y) return x;
    return y;
}

void foo(int a, int b, int c = 15)
{
    cout << a << ' ' << b << ' ' << c << endl;
}

void output(int n, int m, int a[][3])
{
    for (int i = 0; i < n; i ++ )
    {
        for (int j = 0; j < m; j ++ )
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    output(3, 3, a);

    return 0;
}


