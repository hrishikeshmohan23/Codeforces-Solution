#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	int i=n-1,x=2,y=2,j=0;
	while(i>0)
	{
		cout<<a[x]<<" ";
		if(x+y>n)
		{
			j=n-y;
			x-=j;
		}
		else
		x+=y;
		y++;
		i--;
	}
}
