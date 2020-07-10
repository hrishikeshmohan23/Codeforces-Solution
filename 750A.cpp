#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int x=240-k;
	int i=0;
	while(x>=0 && i<=n)
	{
		x-=5*(i+1);
		i++;
	}
	cout<<i-1;
}
