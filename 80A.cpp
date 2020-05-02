#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f=0,n,m;
	vector<int> v;
	cin>>n>>m;
	int x=0;
	for(int i=n+1;i<=50;i++)
	{
		f=1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=0;
				break;
			}
		}
		if(f)
		{
			if(m==i)
			{
				cout<<"YES";
				x=1;
				break;
			}
			else
			{
				cout<<"NO";
				x=1;
				break;
			}
		}
			
	}
	if(x==0)
	cout<<"NO";
	
}
