#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	cin>>k;
	for(int i=0;i<n;i++)
	{
			if(k<=b[i])
			{
				cout<<n-i;
				return 0;
			}
	}
	return 0;
}
