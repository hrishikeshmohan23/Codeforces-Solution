#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s[100001];
	int n,count=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<n;i++)
	{
		if(s[i]!=s[i-1])
			count++;
	}
	cout<<count;
}
