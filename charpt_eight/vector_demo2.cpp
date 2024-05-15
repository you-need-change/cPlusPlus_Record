#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a{1, 2, 3, 4, 5};

    int t = upper_bound(a.begin(), a.end(), 6) - a.begin();

    cout << a[t] << endl;

    return 0;
}