#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x=0,count=1;
	cin>>n>>m;
	x=n-1;
	count=1;
	while(x>0)
	{
		count++;
		x--;
		if(count%m==0)
			x++;
	}
	cout<<count;
}
