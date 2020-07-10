#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,d,count=2;;
	set<long long> s;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if((a[i+1]-a[i])>2*d)
		{
			count+=2;
		}else
		{
			if((a[i+1]-a[i])==2*d)
			count+=1;
		}

	}
	cout<<count;
}
