#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,j[100],c=0,x;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>j[i];
	}
	x=j[k-1];
	for(int i=0;i<n;i++)
	{
		if(j[i]>=x && j[i]>0)
		c++;
	}
	cout<<c<<endl;
     	
	return 0;

}
