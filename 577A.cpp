#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,c=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		if(k%i==0 && k/i<=n)
		c++;
	}
	cout<<c;
}
