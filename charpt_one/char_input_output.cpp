#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double a, b;
    
    scanf("%c%c", &a, &b); // 读char型变量时，会读入空格
    //cin >> a >> b; // 读char型变量时，不会读入空格

    printf("%c %c\n", a, b);

    return 0;
}