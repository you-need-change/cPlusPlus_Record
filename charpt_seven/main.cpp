#include <iostream>

using namespace std;

struct Node
{
    int val;
    Node* next;

    Node(int _val) : val(_val), next(NULL) {}
};

int main()
{
    // int a = 10;

    // int* p = &a;
    // int& p = a; // 引用、别名

    Node* p = new Node(1);
    Node* q = new Node(2);
    Node* o = new Node(3);

    p->next = q;
    q->next = o;

    // 链表的遍历方式
    Node* head = p;
    for (Node* i = head; i != NULL; i = i->next)
        cout << i->val << endl;
    return 0;
}