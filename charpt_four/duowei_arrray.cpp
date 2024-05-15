#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a[10], b[10];

    for (int i = 0; i < 10; i ++ ) a[i] = i;

    memcpy(b, a, sizeof a);

    for (int i = 0; i < 10; i ++ ) cout << b[i] << ' ';
    
    return 0;
}