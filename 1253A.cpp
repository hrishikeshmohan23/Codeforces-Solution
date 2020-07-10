#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int f=0;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		set<int> s;
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			s.insert(b[i]-a[i]);
			cout<<(b[i]-a[i])<<" ";
		}
		cout<<endl;
		auto x=s.begin();
		auto y=s.end();
		if(s.size()>2)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			if(*x<0)
				cout<<"NO"<<endl;
			else
			{
				for(int i=0;i<n;i++)
				{
					if(b[i]-a[i]-*x!=0 && b[i]-a[i]-*y!=0)
					{
						f=1;
						break;
					}
				}
				if(f==0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}
	}
}
