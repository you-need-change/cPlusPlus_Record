#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{  
    char s[1000];

    // 用fgets读取一行
    fgets(s, 1000, stdin);

    int a, b;
    char str[1000];
    double c;
    
    sscanf(s, "%d%s%d%lf", &a, str, &b, &c);

    printf("%d\n%s\n%d\n%lf\n", a, str, b, c);




    // string s, a, b;
    
    // 用getline读取一行
    // getline(cin, s);
    // cin >> a >> b;
    
    // stringstream ssin(s);
    // string str;
    // while (ssin >> str)
    // {
    //     if (str == a) cout << b << ' ';
    //     else cout << str << ' ';
    // }
    
    return 0;
}