#include<iostream>
using namespace std;
class abc
{
    public:
        int l;
        int b;
    public:
        void input()
        {
            cin>>l>>b;
        }
        abc(int c = 1, int b = 1)
        {
            l = c;
            b = b;
        }
        int rect()
        {
            return l*b;
        }
};
int main()
{
    cout << "Hello India"<<endl;
    abc a(2,4);
    cout<<"Area :: "<<a.rect();
    return 0;
}
