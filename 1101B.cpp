#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=0,a=-1,b=-1,ans=4;
	string s;
	cin>>s;
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='[')
			x=1;
					
		if(s[i]==':' && x==1)
		{
			a=i;
			x=0;
			break;
		}
	}
	x=0;
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]==']')
			x=1;
					
		if(s[i]==':' && x==1)
		{
			b=i;
			x=0;
			break;
		}
	}
	if(a==-1 || b==-1 || a>=b)
	{
		cout<<-1;
	}
	else
	{
		for(int i=a;i<=b;i++)
			if(s[i]=='|')
				ans++;
		cout<<ans;
	}
}
