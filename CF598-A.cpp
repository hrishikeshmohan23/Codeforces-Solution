#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,a,b,s,n,sum=0,x=0;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		x=0;
		sum=0;
		cin>>a>>b>>n>>s;
		sum=(s/n)*n;
		x=a*n;
		if(x<sum)
		{
			cout<<"NO"<<endl;
			continue;
		}
		if(sum>s)
		{
			while(sum<s)
			{
				sum=sum-n;
			}
	}
		else
		{
		sum=sum+b;
		if(sum>=s)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;;	
		}
	}
	}
	return 0;
}
