#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,count=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a[i]+=k;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]<=5 && a[i+1]<=5 && a[i+2]<=5)
		{
			count++;
			i+=2;
		}
	}
	cout<<count<<endl;
}
