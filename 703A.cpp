#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,c,c1=0,c2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m>>c;
		if(m>c)
		c1++;
		else if(c>m)
		c2++;
		else
		{
			c1++;
			c2++;
		}
		
	}
	if(c1>c2)
	cout<<"Mishka";
	else if(c2>c1)
	cout<<"Chris";
	else
	cout<<"Friendship is magic!^^";
	
}
