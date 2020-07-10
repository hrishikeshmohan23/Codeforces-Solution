#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,sum=0,n,t,d,x=0,f=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		f=0;
		sum=0;
		cin>>n>>d;
		if(d<=n)
		cout<<"YES"<<endl;
		else
		{
			a=0;
			b=n;
			while(a<b)
			{
				x=(a+b)/2;
				sum=x+ceil(((d*1.0)/(x+1)));
				if(sum<=n)
				{
					cout<<"YES"<<endl;
					f=1;
					break;
				}
				else
				a=x+1;
			}
			if(f==0)
				cout<<"NO"<<endl;
				
		}
	}
}
