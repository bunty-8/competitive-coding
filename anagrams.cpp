#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1,s2;
        int f1[26],f2[26],i,c=0;
        memset(f1,0,sizeof(f1));
        memset(f2,0,sizeof(f2));
        cin>>s;
        int len=s.size();
        if(len%2!=0)
            cout<<"-1\n";
        else
        {
        s1=s.substr(0,len/2);
        s2=s.substr(len/2,len/2);//cout<<s1<<" "<<s2;
        for(i=0;i<s1.size();i++)
            f1[s1[i]-97]++;
        for(i=0;i<s2.size();i++)
            f2[s2[i]-97]++;
        for(i=0;i<26;i++)
        {
            if(f1[i]!=f2[i] and f1[i]-f2[i]>0)
            {
                c+=f1[i]-f2[i];
               // cout<<c<<" ";
            }
        }
        cout<<c<<endl;
        }
    }
}

