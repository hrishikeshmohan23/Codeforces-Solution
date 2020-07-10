#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	cin>>x;
	if(x&1)	
	{
		cout<<"7";
		for(int j=0;j<(x-3)/2;j++)
		cout<<"1";
	}
	else
	{
		for(int j=0;j<(x/2);j++)
		{
			cout<<"1";
		}
		}
		cout<<endl;
	}
	
}
