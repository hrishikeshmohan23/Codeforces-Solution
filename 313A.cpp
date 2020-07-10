#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,n,n1,x,rem;
	cin>>n;
	if(n>=0)
	{
		cout<<n;	
	}
	else
	{
		n1=n;
		n1=n1/10;
		x=n1;
		n1=n1/10;
		rem=n%10;
		x1=n1;
		x1=x1*10+rem;
		if(x>x1)
		cout<<x;
		else
		cout<<x1;
	}
}

