#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,m,x,diff;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(n<m)
		{
			diff=1;
			x=m-n;
			if(x%2==0)
				diff++;
		}
		else if(n==m)
			diff=0;
		else
		{
			diff=1;
			x=n-m;
			if(x%2!=0)
			diff++;
		}
		cout<<diff<<endl;
	}
}
