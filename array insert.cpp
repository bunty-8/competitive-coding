/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
main()
{
    int n,que,i,j;
    cin>>n;
    cin>>que;
    int arr[n],quearr[3];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<que;i++)
    {
        int pos,update,sum=0;
        for(j=0;j<3;j++)
        {
            cin>>quearr[j];
        }
        if(quearr[0]==1)
        {
            pos=quearr[1];
            update=quearr[2];
            arr[pos]=update;
        }
        if(quearr[0]==2)
        {
            if(quearr[1]<0 or quearr[1]>)
            cout<<"-1"<<endl;
            if(quearr[2]<0 or quearr[2]>4)
            cout<<"-1"<<endl;
            for(j=quearr[1];j<=quearr[2];j++)
            {
                sum=sum+arr[j];
            }
            cout<<sum<<endl;
        }
    }
}

