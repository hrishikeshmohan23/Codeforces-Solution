#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		
		if(sqrt(a)==b)
		{
			cout<<"YES\n";
		}
		else if(b==1)
		{
			if(a%2!=0)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
		else
		{
			long long n=b-1;
			n=n*n;
			long long m=a-n;
			if(m%2==0 || m<=((2*b)-3)|| m<0)
			cout<<"NO\n";
			else
			cout<<"YES\n";
		}
			
	}
}
