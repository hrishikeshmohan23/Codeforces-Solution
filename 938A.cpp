#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string a,s;
	s=' ';
	cin>>n;
	cin>>a;
	for(int i=1;i<n;i++)
	{
		if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='y'|| a[i]=='u') && (a[i+1]=='a' || a[i+1]=='e' || a[i+1]=='i' || a[i+1]=='o' || a[i+1]=='u' || a[i+1]=='y'))
		{	
			continue;
		}
		else
		s+=a[i];
	}
		for(int i=0;i<a.size();i++)
		if(a[i]!=' ')
		cout<<s[i];
}
