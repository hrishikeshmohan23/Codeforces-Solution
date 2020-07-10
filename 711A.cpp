#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,n,f=0;
	string s;
	cin>>n;
	vector<string> v;
	while(n--)
	{
		int x=0;
		cin>>s;
		x=5;
		if(s[0]=='O' && s[1]=='O' && f==0)
		{
			s[0]='+';
			s[1]='+';
			f=1;
		}
		else if(s[x-2]=='O' && s[x-1]=='O' && f==0)
		{
			s[x-2]='+';
			s[x-1]='+';
			f=1;
		}
		v.push_back(s);
		
	}
	if(f==0)
	cout<<"NO\n";
	else
	{
		cout<<"YES\n";
		for(auto it:v)
		cout<<it<<endl;
		
	}
}

