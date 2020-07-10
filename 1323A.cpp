#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int a[n];
		int counte=0,counto=0;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			if(a[j]%2!=0)
			counto++;
			else
			counte++;
		}
		if(n==1 && counto==1)
			cout<<-1<<endl;
		else if(counte)
		{
			cout<<1<<endl;
			for(int j=0;j<n;j++)
			{
				if(a[j]%2==0)
				{
					
					cout<<(j+1)<<endl;
					break;
				}
		}
		}
		else
		{
			cout<<2<<endl;
			int k=2;
			for(int j=0;j<n;j++)
			{
			    if(k)
			    {
					if(a[j]%2!=0)
					{
						cout<<(j+1)<<" ";
						k--;
					}
				}
			}
		cout<<endl;
		}
	}
}
