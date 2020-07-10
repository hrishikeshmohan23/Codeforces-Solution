#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c,q,a,b,n,s,sum;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>a>>b>>n>>s;
			c=s/n;
			a=min(c,a);
			sum=(a*n)+b;
			if(sum>=s)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
	}
	return 0;
}
