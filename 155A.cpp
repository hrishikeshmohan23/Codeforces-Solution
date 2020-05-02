#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,max,min;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	max=a[0];
	min=a[0];	
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{	
			count++;
			max=a[i];
		}
		if(min>a[i])
		{
			count++;
			min=a[i];		
		}
	}
	cout<<count;
}
