#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long o,n,a[10000000001],count,max;
	cin>>o;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i>0 && a[i]<=a[i-1])
			count++;
		if(max<count)
			max=count;
	}
	cout<<max;
	
}
