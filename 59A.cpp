#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count1=0,count2=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(islower(s[i]))
			count1++;
		else if(isupper(s[i]))
			count2++;
	}
	if(count1>count2 || count1==count2)
	{
		for(int i=0;i<s.size();i++)
		{
			s[i]=tolower(s[i]);
			cout<<s[i];
		}
	}
	else if(count2>count1)
	{
		for(int i=0;i<s.size();i++)
		{	
			s[i]=toupper(s[i]);
			cout<<s[i];
		}
	}
}
