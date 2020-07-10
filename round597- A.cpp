#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,f=0;
	cin>>t;
	int max=0,min=0,count=0,x[10000];
	for(int i=0;i<t;i++)
	{ 
		f=0;
		max=min=count=0;
		cin>>a>>b;
		if(a>b)
		{
			max=a;
			min=b;
		}
		else
		{
			max=b;
			min=a;
		}
		for(int i=1;i<=max;i++)
		{
			if(i<=min)
			{
				if(i-min<0)
				{
					x[i]=1;
				}
				else
				{
					x[i]=0;
				}
			}
				else
				{
					if(i-max<0 && x[i-min]==1)
					{
						x[i]=1;
					}
					else
					{
						x[i]=0;
					}
				}
				cout<<x[i]<<" ";
			}
			cout<<endl;
				for(int i=max+1;i<max+10;i++)
				{
					cout<<x[i-max]<<" "<<x[i-min]<<i-min;;
					if(x[i-max]==1 && x[i-min]==1)
					{
						cout<<"INFINITE"<<endl;
						f=1;
						break;
					}
				}
				if(f==0)
				{
					cout<<"FINITE"<<endl;
				}
			}
	return 0;
}
