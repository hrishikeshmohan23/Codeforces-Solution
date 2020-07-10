#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int n,x,c=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		x=s[i]-'0';
		if(x%2==0)
			c+=i+1;
	}
	cout<<c;
}
