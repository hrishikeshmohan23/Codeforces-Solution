#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,m,n,k,d,N,p=0;
	cin>>k>>l>>m>>n>>d;
	int x[d];
	if(d<k ||d<l || d<m || d<n)
	{
		cout<<"0";
		exit(0);
	}
		for(int i=k;i<=d;i=i+k)
		{
			x[i]=i;
		}
		
		for(int j=l;j<=d;j=j+l)
		{
			x[j]=j;
		}
		for(int z=m;z<=d;z=z+m)
		{
			x[z]=z;
		}
		for(int h=n;h<=d;h=h+n)
		{
			x[h]=h;
		}
		while(d!=0)
		{
			if(x[d]!=0 and x[d]==d)
			{	
				p++;
			}
			d--;
		}
		cout<<p;
		return 0;
		
	}
	

