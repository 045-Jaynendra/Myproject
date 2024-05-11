#include<bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node *next;
    Node(int x) {
        val = x;
        next = NULL;
    }
};
int main() {
    Node *nod = new Node(-1);
    cout<<nod->next;
    return 0;
}