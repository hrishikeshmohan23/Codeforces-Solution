#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,x1=0,x=0,x3=0,j;
	cin>>n>>m>>a>>b;
	x3=(n/m)*b;
	if(n%m!=0)
	x3+=b;
	x1=n*a;
	x=(n/m)*b;

	if(n%m!=0)
	{
		x=x+(n%m)*a;
	}
	j=x;
	if(j>x1)
	j=x1;
	else if(j>x3)
	j=x3;
	cout<<j;
}
