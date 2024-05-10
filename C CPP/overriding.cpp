#include<bits/stdc++.h>
using namespace std;
class A {
    public:
    virtual void fun() {
        cout<<"A";
    }
};
class B : public A {
    public:
    void fun() {
        cout<<"B";
    }
};
int main() {
    A *p;
    B ob;
    p = &ob;
    p->fun();
    return 0;
}