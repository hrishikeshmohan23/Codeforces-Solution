#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max,min;
	int sum=0;
	cin>>n;
	int x,y;
	cin>>x>>y;
	sum-=x;
	sum+=y;
	max=sum;
	for(int i=0;i<(n-1);i++)
	{
		cin>>x>>y;
		sum-=x;
		sum+=y;
		if(max<sum)
		max=sum;
	}
	cout<<max;
	return 0;
}
