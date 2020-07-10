#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long b,x,n,count=0,i=0;
		cin>>n;
		x=n;
		int arr[10];
		for(i=0;i<5;i++)
		{
			arr[i]=(x%10);
			if(x%10)
			count++;
			x/=10;
			if(x==0)
			break;
		}
		cout<<count<<endl;
	for(int j=0;j<=i;j++)
	{ 
	    if(arr[j])
	    {
	        cout<<arr[j]*pow(10,j)<<" ";
	    }

	}		
	cout<<endl;
	}
}
