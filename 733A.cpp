
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=0,x=0,ans=0;
	int i=0;
	s+='Y';
	for(i=0;i<s.size();++i)
	{
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||s[i]=='Y')
		{
			ans=max(ans,i-x+1);
			x=i+1;
		}
	}
	cout<<ans;
}
