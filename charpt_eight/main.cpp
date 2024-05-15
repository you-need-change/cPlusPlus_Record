#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    queue<int> q; // 队列
    
    q.push(1); // 在队尾插入一个元素
    q.pop(); // 弹出队头元素
    q.front(); // 返回队头
    cout << q.back() << endl; // 返回队尾

    // priority_queue<int> a; // 大根堆

    // a.push(1); // 插入一个元素
    // a.top(); // 取最大值
    // a.pop(); // 删除最大值
    
    // priority_queue<int, vector<int>, greater<int>> b; // 小根堆
    // struct Rec
    // {
    //     int a, b;
    //     bool operator< (const Rec& t) const
    //     {
    //         return a < t.a;
    //     }
    // };

    // priority_queue<Rec> d;

    // d.push({1, 2});

    return 0;
}