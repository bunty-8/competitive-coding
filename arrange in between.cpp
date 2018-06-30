#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        int n,m;
        cin>>s>>n>>m;
        for(i=n;i<=m;i++)
        {
            for(j=n;j<m;j++)
            {
                if(s[j]<s[j+1])
                {
                 char temp=s[j];
                 s[j]=s[j+1];
                 s[j+1]=temp;
                }
            }
        }
        cout<<s<<"\n";
    }
}
