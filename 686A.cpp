#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long sum=0,n,x,y,count=0;
	cin>>n>>x;
	sum+=x;
	char s;
	for(int i=0;i<n;i++)
	{
		cin>>s>>y;
		if(s=='-')
		{
			if(y>sum)
			count++;
			else
			sum-=y;
		}
		else
		sum+=y;
	}
	cout<<sum<<" "<<count;
}
