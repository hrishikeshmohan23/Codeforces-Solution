#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,sum=0,sum1=0;
		cin>>n;
		if(n%4)
		cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			for(int i=1;i<=(n/2);i++)
			{
				cout<<i*2<<" ";
				sum+=(i*2);
			}
			int k=1;
			for(int i=1;i<(n/2);i++)
			{
				cout<<k<<" ";
				sum1+=k;
				k+=2;
			}
			cout<<sum-sum1;
			cout<<endl;
		}
		
	}
}
