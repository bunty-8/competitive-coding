#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    cin>>m;
    int arr[n];
    memset(arr,0,sizeof(arr));
    for(i=0;i<m;i++)
    {
        int a,b,k;
        cin>>a;
        cin>>b;
        cin>>k;
        for(j=a-1;j<=b-1;j++)
        {
            arr[j]=arr[j]+k;
        }
    }
    int max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    cout<<max;
}
