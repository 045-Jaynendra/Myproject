#include<iostream>
using namespace std;
template <class T>
class TemplateOverloading
{
public:
    T data;
    TemplateOverloading(T a)
    {
        data = a;
    }
    void display()
    {
        cout << data;
    }
};
int main()
{
    int r;
    char n[20],a[50];
    cout<<"Enter your Registration no. :: ";
    cin>>r;
    fflush(stdin);
    cout<<"Enter your Name :: ";
    gets(n);
    fflush(stdin);
    cout<<"Enter your Address :: ";
    gets(a);
    TemplateOverloading<int> R(r);
    TemplateOverloading<string> N(n);
    TemplateOverloading<string> A(a);
    cout<<"\nRegistration Number :: ";
    R.display();
    cout<<"\nName :: ";
    N.display();
    cout<<"\nAddress :: ";
    A.display();
    return 0;
}