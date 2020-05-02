#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a=0,b=0,sum1=0,sum2=0;
	while(n--)
	{
		int t,x,y;
		cin>>t>>x>>y;
		if(t==1)
		{
			a+=x;
			sum1+=10;
		}
		else
		{
			b+=x;
			sum2+=10;
		}
	}
	if(a>=((sum1)/2))
		cout<<"LIVE\n";
	else
		cout<<"DEAD\n";
	if(b>=((sum2)/2))
		cout<<"LIVE\n";
	else
	cout<<"DEAD\n";
}
