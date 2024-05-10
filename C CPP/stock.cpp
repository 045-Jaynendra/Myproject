#include <iostream>
#include <vector>
using namespace std;
int main()
{
    system("cls");
    vector<vector<int>> n;
    int j, d, y;
    cout << "How many vactor you want to create :: ";
    cin >> y;
    for (int h = 0; h < y; h++)
    {
        cout << "How many no. you want to enter :: ";
        cin >> j;
        vector<int> tmp;
        for (int i = 0; i < j; i++)
        {
            cin >> d;
            tmp.push_back(d);
        }
        n.push_back(tmp);
    }
    cout << "======= Output =======\n";
    for (int i = 0; i < n.size(); i++)
    {
        cout << "Size :: " << n[i].size() << "\t";
        for (int a = 0; a < n[i].size(); a++)
        {
            cout << n[i][a] << " ";
        }
        cout << endl;
    }
    return 0;
}