#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,x=0,sum=0;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(arr[i]>0)
		{
			x+=arr[i];
		}
		cout<<sum<<" ";
		sum=x;
	}
	return 0;
	
		

}
