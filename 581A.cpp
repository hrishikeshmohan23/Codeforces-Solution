#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,count=0,x,min,max;
	cin>>a>>b;
	min=a;
	max=a;
	if(max<b)
	{
		max=b;
	}
	if(max==a)
	min=b;
	else
	min=a;
	count=min;
	x=(max-min)/2;
	cout<<count<<" "<<x;
 
}
