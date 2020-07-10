#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long sum=0,x,a,b,c,d,e,f,x1=0,x2=0;
	cin>>a>>b>>c>>d>>e>>f;
	x=a;
	if(x<b)
	x=b;
	if(x==e)
	{
		x1=a;
		if(x1>b)
		x1=b;
		a-=x1;
		b-=x1;
		x2=b;
		if(x2>c)
		x2=c;
		if(x2>d)
		x2=d;
		sum=x1*e+x2*f;
	}
	else
	{
		x1=b;
		if(x1>c)
		x1=c;
		if(x1>d)
		x1=d;
		b-=x1;
		x2=a;
		if(x2>b)
		x2=b;
		sum=x1*f+x2*e;
	}
	cout<<sum;
}
