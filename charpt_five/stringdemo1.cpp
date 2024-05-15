#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s = "Hello Wrold!";

    for (char &c : s)
    {
        
        c = 'a';
    }

    cout << s << endl;

    return 0;
}