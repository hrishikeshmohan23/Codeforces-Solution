#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],max=0,count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(max<a[i])
			max=a[i];
	}
	for(int i=0;i<n;i++)
	{
		count+=max-a[i];
	}
	cout<<count;
		
	
	
}
