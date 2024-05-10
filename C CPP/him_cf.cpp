#include<iostream>
using namespace std;
int main()
{
  int i,j,n;
  cin >>n;
 
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=3;j++)
      {
          if(i==j)
          cout<<"\\";
          else if((i+j)==(n+1))
          cout<<"/";
          else
          cout<<"*";
      }
      cout<<endl;
  }
}