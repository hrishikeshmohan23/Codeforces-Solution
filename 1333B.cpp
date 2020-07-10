#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,f1=0,f2=0,f3=0,f=0;
		cin>>n;
		int a[n],b[n];
		set<int> s;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			s.insert(a[i]);
			if(a[i]==1 && f1==0)
				f1=i;
			else if(a[i]==0 && f2==0)
				f2=i;
			else if(a[i]==-1 && f3==0)
				f3=i;
		}
		for(int i=1;i<=n;i++)
		cin>>b[i];
		cout<<f1<<" "<<f2<<" "<<f3<<endl;
		for(int i=n;i>=1;i--)
		{
			if(a[i]>b[i] && f3>i || f3==0)
			{
				cout<<f3<<" "<<i<<endl;
				f=1;
				break;
			}
			else if(a[i]==b[i])
			{
				continue;
			}
			else if(a[i]<b[i] && f1>i || f1==0)
			{
				cout<<"u"<<a[i]<<endl;
				f=1;
				break;
			}
			
		}
		if(f==1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
