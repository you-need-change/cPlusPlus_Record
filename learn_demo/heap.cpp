#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> s1;

    /*
    堆插入
    void push(int x){
    heap[len++]=x;
    int i=len;
    while(i>1&&heap[i]<heap[i/2]){
        swap(heap[i],heap[i/2]);
        i=i/2;
	}
}
    */
    for (int i = 0; i < 5; i ++ )
        s1.push(5 - i);

    cout << s1.top() << endl;

    return 0;
}