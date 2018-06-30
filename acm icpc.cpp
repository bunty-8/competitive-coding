#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,len,i,j,k;vector<int> store;
	cin>>n;
	cin>>len;
	string s[n];
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			int maxcount=0;
			for(k=0;k<len;k++)
			{
				if(s[i][k]=='1' or s[j][k]=='1')
					maxcount++;
			}
			store.push_back(maxcount);
		}
	}
	int max=store[0];
	for(i=0;i<store.size();i++)
		{
			if(max<store[i])
				max=store[i];
		}
		int c=0;
	for(i=0;i<store.size();i++)
	{
		if(max==store[i])
			c++;
	}
	cout<<max<<"\n";
	cout<<c;
}
