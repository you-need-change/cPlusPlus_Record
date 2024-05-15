#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int sum = 1; 
    for (int i = 1; i <= 31; i ++ ) sum *= 2;
    cout << "sum = " << sum - 1 << endl;

    return 0;
}