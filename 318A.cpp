#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x,k,p,h;
	cin>>n>>k;
	if(n%2==0)
	{
		x=n/2;
	}
	else
	x=(n+1)/2;
	if(k<=x)
	{
		p=(k*2)-1;
	}
	else
	{
		h=k-x;
		p=h*2;
	}
cout<<p;	
}
