#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i=0;
	cin>>n>>m;
	while(m>0)
	{
		m-=i;
		i++;
		if(i==n+1)
			i=1;
	}
	if(m<0)
	{
		if(i==1)
			i=n+1;
	m+=(i-1);
	}
	cout<<m;
}
