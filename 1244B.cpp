#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,f=0,m,m1,max;
	cin>>t;
	string x;
	for(int i=0;i<t;i++)
	{	max=0;
		cin>>n;
		cin>>x;
		for(int i=n-1;i>=0;i--)
		{
			f=0;
			if(x[i]=='1')
			{
				m=i+1;
				f=1;
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(x[i]=='1')
			{
				m1=n-i;
				f=1;
				break;
			}
		}
		if(m>m1)
		max=m;
		else
		max=m1;
		if(f==0)
		{
			cout<<n<<endl;;
		}
		else
		cout<<max*2<<endl;;
	}
	return 0;
}
