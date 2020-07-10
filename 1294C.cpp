#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long z,x,j=0,n,a,b,c,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		a=0;
		b=0;
		c=0;	
		for(int k=2;k<=n/2;k++)
		{
			
			if(n%k==0)
			{
				a=k;
				break;
			}
		}
		for(int k=a+1;k<=n/2;k++)
		{
			if((n/a)%k==0)
			{
				b=k;
				break;
			}
		}
		cout<<a<<" "<<b
		if(a!=0 && b!=0)
		c=(n/(a*b));
		
		if(c!=a && c!=b && c!=1)
		cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
		else
		cout<<"NO"<<endl;
	}
}
			
