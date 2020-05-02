#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,sum1=0,c=0;
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		sum+=x[i];
	}
	sort(x,x+n);
	while(n!=0)
	{
		sum1+=x[n-1];
		c++;
		sum-=x[n-1];
		if(sum1>sum)
		{
			cout<<c;
			break;
		}
		n--;
	}
	return 0;
}
