#include<bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node *next;
    Node() : val(0), next(NULL) {};
    Node(int x) : val(x), next(NULL) {};
    Node(int x, Node *ptr) : val(x), next(ptr) {};
};
int main() {
    Node *n1 = new Node();
    cout<<n1->val<<" "<<n1->next<<" "<<n1<<"\n";
    Node *n2 = new Node(1);
    cout<<n2->val<<" "<<n2->next<<" "<<n2<<"\n";
    Node *n3 = new Node(2, n2);
    cout<<n3->val<<" "<<n3->next<<" "<<n3->next->val<<" "<<n3->next->next<<" "<<n3<<"\n";
    return 0;
}