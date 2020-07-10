#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char c='a';
		int n,a,b;
		cin>>n>>a>>b;
		string str="";
		int x=97,m=97+b,y=a;
		while(y--)
		{
			str+=c;
			x++;
			if(x==m)
			x=97;
			c=char(x);
		}
		int i=a;
		while(i<n)
		{
			str+=c;
			x++;
			if(x==m)
			x=97;
			c=char(x);
			i++;
		}
		cout<<str<<"\n";
	}
}
