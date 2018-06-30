#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6],i,j,count=0;vector<int> max;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
            cin>>a[i][j];
    }
    for(j=0;j<4;j++)
    {
    for(i=0;i<4;i++)
    {
            count=a[j][i]+a[j][i+1]+a[j][i+2]+a[j+1][i+1]+a[j+2][i]+a[j+2][i+1]+a[j+2][i+2];
            max.push_back(count);
            count=0;
    }
    
    }
    int large=max[0];
    for(i=0;i<max.size();i++)
    {
    	if(large<max[i])
    		large=max[i];
    }
    cout<<large;	
}
