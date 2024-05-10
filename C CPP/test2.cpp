#include<bits/stdc++.h>
using namespace std;
int main() {
    map<char, char> mc;
    mc['j'] = 'n';
    if(mc.find('h') == mc.end()) cout<<"not found";
    else cout<<mc['j'];
    return 0;
}