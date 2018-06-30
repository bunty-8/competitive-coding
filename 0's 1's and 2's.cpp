#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,f[3];
		int res[]={0,1,2};
		memset(f,0,sizeof(f));
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			f[a[i]]++;
		}
		for(i=0;i<3;i++)
		{
			int a=f[i];
			while(a--)
			{
				cout<<res[i]<<" ";
			}
		}
		cout<<endl;
	}
}
