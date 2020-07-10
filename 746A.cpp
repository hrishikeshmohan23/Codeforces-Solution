#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,sum=0;
	cin>>a>>b>>c;
	while(a>=0 && b>=0 && c>=0)
	{
		a-=1;
		b-=2;
		c-=4;
		if(a>=0 && b>=0 && c>=0)
			sum+=7;
		else
			break;
	}
	cout<<sum;
}
