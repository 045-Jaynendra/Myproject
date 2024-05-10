#include <iostream>
using namespace std;
int main()
{
    int n;
    char str[10], str1[8];
    cin >> str;
    if (str[0] == '1' && str[1] == '2' && str[8] == 'A' && str[9] == 'M')
    {
        str1[0] = '0';
        str1[1] = '0';
    }
    else if (str[0] == '0' && str[1] == '8' && str[8] == 'P' && str[9] == 'M')
    {
        str1[0] = '2';
        str1[1] = '0';
    }
    else if (str[0] == '0' && str[1] == '9' && str[8] == 'P' && str[9] == 'M')
    {
        str1[0] = '2';
        str1[1] = '1';
    }
    else if (str[0] == '1' && str[1] == '0' && str[8] == 'P' && str[9] == 'M')
    {
        str1[0] = '2';
        str1[1] = '2';
    }
    else if (str[0] == '1' && str[1] == '1' && str[8] == 'P' && str[9] == 'M')
    {
        str1[0] = '2';
        str1[1] = '3';
    }
    else if (str[0] == '1' && str[1] == '2' && str[8] == 'P' && str[9] == 'M')
    {
        str1[0] = str[0];
        str1[1] = str[1];
    }
    else if (str[8] == 'P' && str[9] == 'M')
    {
        str1[0] = '1';
        str1[1] = str[1] + 2;
    }
    else
    {
        str1[0] = str[0];
        str1[1] = str[1];
    }
    str1[2] = str[2];
    str1[3] = str[3];
    str1[4] = str[4];
    str1[5] = str[5];
    str1[6] = str[6];
    str1[7] = str[7];
    for (int i = 0; i < 8; i++)
    {
        cout << str1[i];
    }
    return 0;
}