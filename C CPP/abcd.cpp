#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n = 0, tmp = 0;
    char *str;
    cout<<"Enter word :: ";
    cin>>str;
    while (str[n] != '\0')
    {
        if(str[n] == str[n + 1])
            break;
        n++;
    }
    if((int)str[n] >= 65 && (int)str[n] <= 90)
        tmp = ((int)str[n] - 64) * 4;
    if((int)str[n] >= 97 && (int)str[n] <= 122)
        tmp = ((int)str[n] - 96) * 4;
    cout<<tmp;
    return 0;
}