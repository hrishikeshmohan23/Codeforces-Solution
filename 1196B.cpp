#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long p,n,k;
		cin>>n>>k;
		p=0;
		long long pos=0,a[n],counto=0,counte=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2)
			{
				counto++;
				if(p<k)
				{
					p++;
					pos=i;
					counte++;
				}
			}
		}
		if(k>counto)
		cout<<"NO";
		else if(((counto-counte)%2) && (counto-counte)!=0)
		cout<<"NO";
		else
		{
			p=0;
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				if(a[i]%2)
				{
					cout<<(i+1)<<" ";
					p++;
				}
				if(p==k)
				break;
			}
		} 
		cout<<endl;
	}
}
