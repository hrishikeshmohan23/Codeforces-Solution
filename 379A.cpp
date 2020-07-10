#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,count=0,x=0,sum=0,y=0;
	cin>>a>>b;
	count=a;
	while(a>=b)
	{
		x=a/b;
		sum=a%b;
		count+=x;
		a=x+sum;
	}
	cout<<count;
}
