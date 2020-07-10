#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0,c=0,n,m,k;
	cin>>n>>m>>k;
	long long a[m+1];
	for(int i=0;i<=m;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		count=0;
		for(int j=0;j<32;j++)
		{
			if (((a[m] >> j) & 1) != ((a[i] >> j) & 1)) 
            count++;
        }
        if(count<=k)
        	c++;
	}
	cout<<c;
	
}
