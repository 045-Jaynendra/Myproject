#include <iostream>

using namespace std;
int main()
{
    system("cls");
    pair<int, string> n;
    n.first = 45;
    n.second = "Jaynendra Sharma";
    pair<int, string> j = n;
    //pair<int, string> &j = n;
    j.first = 1;
    j.second = "Nidhi Jain";
    cout << n.first << " " << n.second;
    cout << endl
         << j.first << " " << j.second;
    return 0;
}