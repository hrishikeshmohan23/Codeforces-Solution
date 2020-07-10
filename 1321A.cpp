#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=1;
	cin>>n;
	int a[n],b[n],c=0,c1=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==0 && b[i]==1)
		c++;
		if(a[i]==1 && b[i]==0)
		c1++;
	}
	if(c1>0)
	{
		while(s*c1<=c)
		{
			s++;
		}
		cout<<s;
	}
	else
	cout<<-1;
}
