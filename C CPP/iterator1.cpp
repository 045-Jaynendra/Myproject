#include <iostream>
#include <vector>
using namespace std;
int main()
{
    system("cls");
    vector<int> n = {2, 3, 5, 6, 7};
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << endl
         << endl;
    vector<int>::iterator it = n.begin();
    // cout << *(it+1) << endl;
    // for (it = n.begin(); it != n.end(); ++it)
    // {
    //     cout << *it << " ";
    // }
    vector<pair<int, int>> n_j = {{1, 2}, {2, 5}, {8, 0}};
    vector<pair<int, int>>::iterator itp;
    for (auto tmp : n_j)
    {
        // cout << (*itp).first << " " << (*itp).second << endl;
        cout << tmp.first << " " << tmp.second << endl;
    }
    cout << endl;
    for (int value : n)
    {
        cout << value << " "; 
    }
    return 0;
}