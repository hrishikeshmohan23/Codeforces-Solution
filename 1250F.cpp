#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,a,b,n,min=INT_MAX,x;
	cin>>n;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			a=i;
			b=(n/i);
		}
		p=(2*a)+(2*b);
		if(p<min)
			min=p;
		
	}
	cout<<min;
}
