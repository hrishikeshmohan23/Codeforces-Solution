#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,a,b,t,dis;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		dis=0;
		cin>>n>>x>>a>>b;
		dis=abs(a-b)+x;
		if(dis>=n)
		{
			dis=n-1;
		}
		cout<<dis<<endl;
	}
}
