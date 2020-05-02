#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[3],x=0,count=0,sum=0,count1=0;
	cin>>n>>a[0]>>a[1]>>a[2];
	sum=a[0]+a[1]+a[2];
	sort(a,a+3);
	x=n/a[0];
	if(x*a[0]==n)
	{
		count=x;
	}
	else if(((x-1)*a[0]+a[1])==n)
	{
		count=x;
	}
	else if(((x-1)*a[0]+a[2])==n)
		count=x;
	if(count==0)
	{
		x=n/a[1];
		if(x*a[1]==n)
			count=x;
		else if((n-(x-1)*a[1])%a[0]==0)
			count=x-1+((n-(x-1)*a[1])/a[0]);
		else if((x-1)*a[1]+a[2]==n)
			count=x;
	}
	if(count==0)
	{
		x=n/a[2];
		if(x*a[2]==n)
		count=x;
		else if((n-(x-1)*a[2])%a[0]==0)
			count=x-1+((n-(x-1)*a[2])/a[0]);
		else if((n-(x-1)*a[2])%a[1]==0)
			count=x-1+((n-(x-1)*a[2])/a[1]);
	}
	cout<<count;
	}
}
