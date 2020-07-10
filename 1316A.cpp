#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,x,y;
	cin>>t;
	while(t--)
	{
		long long s=0;
		cin>>x>>y;
		long long arr[x];
		for(int i=0;i<x;i++)
		{
			cin>>arr[i];
			s+=arr[i];
		}
		if(s>y)
			cout<<y<<endl;
		else
			cout<<s<<endl;
	}
}
