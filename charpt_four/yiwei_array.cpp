#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int a[100];

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i ++ ) cin >> a[i];

    reverse(a, a + n);
    reverse(a, a + k);
    reverse(a + k, a + n);

    for (int i = 0; i < n; i ++ ) cout << a[i] << ' ';
    
    return 0;
}