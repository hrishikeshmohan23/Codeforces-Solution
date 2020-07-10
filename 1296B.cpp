#include<bits/stdc++.h>
using namespace std;
int main()
{	
	long long t,n,sum=0;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
				while((n/10)!=0)
				{
					sum+=n-(n%10);
					n=(n/10)+(n%10);
				}
				sum+=n;
		cout<<sum<<endl;
	}
}

