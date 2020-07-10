#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,count=0,flag=0;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		count=0;
		while(n!=1)
		{
			if(n%2==0)
			{
				n/=2;
			}
			else if(n%3==0)
			{
				n=2*n/3;
			}
			else if(n%5==0)
			{
				n=4*n/5;
			}
			else
			{
				flag=1;
				break;
			}
			count++;
		}
		if(flag==0)
		cout<<count<<endl;
		else
		cout<<-1<<endl;
	}
	
}
