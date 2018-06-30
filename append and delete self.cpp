#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;int v;
	int k;
	cin>>s>>t>>k;
	int i=0;
	while(i<min(s.size(),t.size()) and s[i]==t[i])
		i++;
	if(i!=0)
		 v=s.size()+t.size()-2*i;
	else if(i==0)
		v=s.size()+t.size()+1;
	if(k>=v)
		cout<<"Yes\n";
	else
		cout<<"No\n";
}
