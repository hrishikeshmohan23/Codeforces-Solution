#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,a,b=1;
	cin>>n;
	for(i=2;i*1<=n;i++)
	{
		if(n%i==0)
		{
			a=i;
			break;
	}
	}
	b=i;
	while((a*b)!=n)
	{
		b++;
	}
	cout<<a<<" "<<b;
}
