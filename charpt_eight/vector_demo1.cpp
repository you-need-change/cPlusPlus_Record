#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <set>
#include <map>

#include <unordered_set>
#include <unordered_map>
#include <bitset>

using namespace std;

int main()
{
    map<string, vector<int>> a;
    a["xm"] = vector<int>({1, 2, 3, 4});
    cout << a["xm"][2] << endl;

    unordered_set<int> a; // 哈希表，不能存储重复元素
    unordered_multiset<int> b; // 哈希表，可以存储重复元素

    bitset<100> c, d;
    c[0] = 1;
    c[1] = 1;

    c.set(3);
    c.reset(3);

    pair<int, string> a;
    a = {3, "xm"};
    
    cout << a.first << ' ' << a.second << endl;

    a = make_pair(4, "abc");

    return 0;
}