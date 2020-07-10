#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y,x,a,b,n,flag=0;
	cin>>n;
	cin>>a>>b;
	for(int i=1;i<n;i++)
	{
		cin>>a>>b;
		if(a!=b)
		{
			flag=1;
			break;			
		}
	}
			
	if(flag==1)
	{
		cout<<"Happy Alex";
	}
	else
	cout<<"Poor Alex";
	
}
