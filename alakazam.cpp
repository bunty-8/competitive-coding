#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,flag=0;
    cin>>n;
    int a[n],s,e;
    for(i=0;i<n;i++)
    {
        cin>>a[i];   
    }
    cin>>s>>e;
    for(i=0;i<n;i++)
    {
        if(a[i]==e)
        {
        flag=1;
        break;
        }
    }
    while(flag)
    {
        if(a[s-1]==e)
        {
            cout<<"Yes\n";
            break;
        }
        else
        {
            s=a[s-1];
        }
    }
    if(flag==0)
    cout<<"No\n";
}
