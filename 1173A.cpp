#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,sum=0;
	cin>>a>>b>>c;
	sum+=a-b;
	if(sum>0)
	{
		if(c<sum)
		cout<<"+";
		else
		cout<<"?";
	}
	else if(sum<0)
	{
		if(c<abs(sum))
		cout<<"-";
		else
		cout<<"?";
	}
	else if(sum==0)
	{
		if(c)
		cout<<"?";
		else
		cout<<"0";
	}
}
