#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k1,k2;
		cin>>n>>k1>>k2;
		int a[k1],b[k2];
		int m1=0,m2=0;
		for(int i=0;i<k1;i++)
		{
			cin>>a[i];
			m1=max(m1,a[i]);
		}
		for(int i=0;i<k2;i++)
		{
			cin>>b[i];
			m2=max(m2,b[i]);
		}
		if(max(m1,m2)==m1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
}
