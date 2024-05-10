#include <bits/stdc++.h>
using namespace std;
void show(string str)
{
    if (str.size() == 0)
        return;
    str.pop_back();
    show(str);
    cout << str << endl;
}
int main()
{
    string str = "Hello Jay";
    show(str);
    return 0;
}