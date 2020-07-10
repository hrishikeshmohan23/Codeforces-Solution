#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,m,count=0,flag=0;
	cin>>n>>m;
	if(n==m)
	{
		cout<<0;
		flag=1;
	}
	else
	{
		x=m/n;
		if(m%n!=0)
		{
			cout<<-1;
			flag=1;
		}
		else
		{
			while(x!=1 && x>0)
			{
				if(x%3==0)
				{
					x=x/3;
					count++;
				}
				else if(x%2==0)
				{
					x=x/2;
					count++;
				}
				else
				{
					cout<<-1;
					flag=1;
					break;
				}
			}
		}
	}
	if(flag==0)
	cout<<count;
}
