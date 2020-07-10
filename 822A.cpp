#include<bits/stdc++.h>
using namespace std;
int main()
{
	 long long a,b,f2=1,hcf;
	cin>>a>>b;
	if(a>b)
	{
		for(int i=1;i<=b;i++)
		{
			f2=f2*i;		
		}
		cout<<f2;
	}
	else
	{
		for(int i=1;i<=a;i++)
		{
			f2=f2*i;			
		}
		cout<<f2;
	}
}

