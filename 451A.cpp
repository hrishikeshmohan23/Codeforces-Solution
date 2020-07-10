#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,flag=0;
	cin>>n>>m;
	x=n*m;
	while(x>0)
	{
		if(flag==0)
		{
			x-=n+m-1;
			n--;
			m--;
			flag=1;
		}
		else
		{
			x-=n+m-1;
			n--;
			m--;
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"Akshat";
	}
	else
		cout<<"Malvika";
	}
