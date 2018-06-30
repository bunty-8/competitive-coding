#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int v,e,i,j;
		cin>>v>>e;
		vector<vector<int> > store;
		store.resize(v);
		while(e--)
		{
			int a,b;
			cin>>a>>b;
			store[a].push_back(b);
			store[b].push_back(a);
		}
		/*for(i=0;i<v;i++)
		{
			cout<<i;
			for(j=0;j<store[i].size();j++)
			{
				cout<<"-> "<<store[i][j];
			}
			cout<<"\n";
		}*/
	}
}
