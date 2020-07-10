#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	int t,n=0,p;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int flag=0;
		cin>>a>>b>>c;
		n=a.size();
		for(int i=0;i<n;i++)
		{
			if(a[i]!=c[i] && b[i]!=c[i])
			{ 
			 	flag=1;
				break;
			}
		}
		if(flag==1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
