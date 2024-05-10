#include <iostream>
#include <map>
using namespace std;
void print(map<string, int> &m)
{
    cout << endl
         << "Size of map :: " << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << "  " << pr.second << endl;
    }
}
int main()
{
    system("cls");
    map<string, int> m;
    int n;
    cin>>n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin>>str;
        m[str]++;
    }
    
    // m["afgseth"] = 4;
    // m["thm"] = 7;
    // m["mkft"] = 2;
    // m.insert({"fdda", 4});
    // m["dtoc7"];
    // m["ffz"];
    // cout<<m["mkft"];
    // map<string,int> :: iterator it = m.find("thm");
    // m.erase(it);
    // m.clear();
    // if(it==m.end())
    //     cout<<"Element not Found.";
    // else
    //     cout << it->first << " " << it->second;
    print(m);
    return 0;
}