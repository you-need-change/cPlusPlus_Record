#include <iostream>

using namespace std;

int n;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void print(int a[])
{
    for (int i = 0; i < n; i ++ ) cout << a[i] << ' ';
    cout << endl;
}

void sort(int a[], int j = 0)
{
    int b[10];
    
    if (j == n - 1) print(a);
    else
    {
        for (int i = j; i < n; i ++ )
        {
            
            for (int i = 0; i < n; i ++ ) b[i] = a[i];
            // cout << "ok" << j << ',' << i << ' ';
            // print(a);
            // cout << endl;
            // print(b);
            for (int k = i; k > j; k -- )
            {
                swap(b[k], b[k - 1]);
            // cout << "ok " << j << ' ';
            // print(a);
            }
            sort(b, j + 1);
        }
    }
}

int a[10];

int main()
{
    cin >> n;
    
    for (int i = 0; i < n; i ++ ) a[i] = i + 1;
    
    sort(a);
    
    return 0;
}



