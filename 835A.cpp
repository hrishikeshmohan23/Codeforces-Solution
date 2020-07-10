#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b=0,x,n,v1,v2,t1,t2;
	cin>>n>>v1>>v2>>t1>>t2;
	x=n;
	a+=t1;
	b+=t2;
	while(x--)
	{
		a+=v1;
	}
	a+=t1;
	while(n--)
	{
		b+=v2;
	}
	b+=t2;
	if(a==b)
	cout<<"Friendship";
	else if(a>b)
	cout<<"Second";
	else
	cout<<"First";
}
