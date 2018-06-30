#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,n;
		cin>>a>>b>>n;
		if(a>=0 and b>=0)
		{
			if(log(a)>log(b))
				cout<<"1\n";
			else if(log(a)<log(b))
				cout<<"2\n";
			else
				cout<<"0\n";
		}
		else if(a>0 and b<0)
		{
			if(n%2!=0)
				cout<<"1\n";
			else
			{
				b=-1*b;
				if(log(a)>log(b))
					cout<<"1\n";
				else if(log(a)<log(b))
					cout<<"2\n";
				else
					cout<<"0\n";
			}
		}
		else if(a<0 and b>0)
		{
			if(n%2!=0)
				cout<<"2\n";
			else
			{
				a=-1*a;
			if(log(a)>log(b))
				cout<<"1\n";
			else if(log(a)<log(b))
				cout<<"2\n";
			else
				cout<<"0\n";
			}
		}
		else if(a<0 and b<0)
		{
			if(n%2==0)
			{
				a=-1*a;
				b=-1*b;
			if(log(a)>log(b))
				cout<<"1\n";
			else if(log(a)<log(b))
				cout<<"2\n";
			else
				cout<<"0\n";
			}
			else
			{
				a=-1*a;
				b=-1*b;
			if(log(a)>log(b))
				cout<<"2\n";
			else if(log(a)<log(b))
				cout<<"1\n";
			else
				cout<<"0\n";
			}
		}
	}
}
