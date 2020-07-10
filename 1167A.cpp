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
		string s;
		cin>>s;
		int i;
		for(i=0;i<n;i++)
		{
			if(s[i]=='8')
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{
			if(n-i>=11)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
}
