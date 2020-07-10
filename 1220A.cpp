#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int counto=0,count1=0,count0=0,counte=0,countr=0,n;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='o')
		counto++;
		else if(s[i]=='z')
		count0++;
		else if(s[i]=='e')
		counte++;
		else if(s[i]=='r')
		countr++;
		else if(s[i]=='n')
		count1++;
	}
	for(int i=0;i<count1;i++)
	cout<<1<<" ";
	for(int i=0;i<count0;i++)
	cout<<0<<" ";
}
