#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;
    
    for (int i = 0; i <= 9998 / x; i ++ )
    {
        cout << i * x + 2 << endl;
    }
    
    return 0;
}