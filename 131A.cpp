#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count1=0,count2=0,n;
	cin>>s;
	n=s.size();
	for(int i=0;i<n;i++)
	{
		if(islower(s[i]))
			count1++;
		else if(isupper(s[i]))
			count2++;
	}
	if(count2==n)
	{
		for(int i=0;i<n;i++)
		{
			s[i]=tolower(s[i]);
		}
		cout<<s;
	}
	else if(islower(s[0]) && count2==n-1)
	{
		s[0]=toupper(s[0]);
		for(int i=1;i<n;i++)
		{
			s[i]=tolower(s[i]);
		}
		cout<<s;
	}
	else
	{
		cout<<s;
	}
	return 0;
}
