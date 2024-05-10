#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        int a,b,sum=0;
        cin>>a>>b;
        int arr[a];
        for(int j=0;j<a;j++)
        {
            cin>>arr[j];
            sum=sum+arr[j];
        }
        int tmp1;
        for(int k=1;;k++)
        {
            if(b==0)
            {
                ar[i]=0;
            }
            if((sum-(b*k))<0 && k==1)
            {
                arr[i]=0;
                break;
            }
            tmp1=sum-(b*k);
            if(tmp1<0)
                break;
            ar[i]=tmp1;
        }
    }
    for(int l=0;l<n;l++)
    {
        cout<<"Case #"<<(l+1)<<": "<<ar[l]<<endl;
    }
    return 0;
}