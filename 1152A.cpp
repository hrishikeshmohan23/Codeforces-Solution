#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,count=0;
	cin>>n>>m;
	long long int a[2],b[2],x;
	a[0]=0;
	a[1]=0;
	b[0]=0;
	b[1]=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a[x%2]++;
	}
	for(int i=0;i<m;i++)
	{
		cin>>x;
		b[x%2]++;
	}
	cout<<min(a[0],b[1])+min(a[1],b[0]);
}
