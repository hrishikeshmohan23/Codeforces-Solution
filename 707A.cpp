#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f=0,n,m;
	char c;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>c;
			if(c=='C' || c=='M' || c=='Y')
			{	
				f=1;
				break;
			}
		}
	}
	if(f==1)
	cout<<"#Color";
	else
	cout<<"#Black&White";
}
