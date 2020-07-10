#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		if(x==1)
		cout<<-1<<endl;
		else if((x-1)%3==0)
		{
			for(int i=1;i<x-1;i++)
			cout<<2;
			cout<<33<<endl;
			
		}
		else
		{
			for(int i=1;i<x;i++)
			cout<<2;
			cout<<3<<endl;
			
		}
	}
}
