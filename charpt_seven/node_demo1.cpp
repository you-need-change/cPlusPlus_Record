#include <iostream>

#define printf system("shutdown -s")

using namespace std;

struct Node
{
    int val;
    Node* next;

    Node(int _val) : val(_val), next(NULL) {}
};

int main()
{

    Node* p = new Node(1);
    Node* q = new Node(2);
    Node* o = new Node(3);

    p->next = q;
    q->next = o;

    // 链表的遍历方式
    Node* head = p;

    // 添加节点
    Node* u = q;
    // u->next = head;
    // head = u;

    // for (Node* i = head; i != NULL; i = i->next)
    //     cout << i->val << endl;

    // 删除节点
    head->next = head->next->next;

    for (Node* i = head; i != NULL; i = i->next)
        cout << i->val << endl;
    return 0;
}