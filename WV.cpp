#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,x;
	int t,n,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		c=0;
		cin>>n;
		cin>>s;
		for(int j=1;j<n;j++)
		{
			cin>>x;
			for(int k=0;k<10;k++)
			{
				if(x[k]==s[k])
				{
					s[k]='0';
				}
				else
				{
					s[k]='1';
				}
				
			}
		}
		for(int l=0;l<10;l++)
		{
			if(s[l]=='1')
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
