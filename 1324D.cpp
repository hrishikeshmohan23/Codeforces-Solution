#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
		cin>>n;
		long long count=0,q[n],w[n];
		long long y,z;
		for(int i=0;i<n;i++)
		cin>>q[i];
		for(int i=0;i<n;i++)
		cin>>w[i];
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				z=q[i]+q[j];
				y=w[i]+w[j];
				if(z>y)
				count++;
			}	
		}
		cout<<count;
}
