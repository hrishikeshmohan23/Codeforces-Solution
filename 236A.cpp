#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	set <char> v;
	cin>>s;
	int c1,c,n=s.size();
	for(int i=0;i<n;i++)
	{
		v.insert(s[i]);
	}
	int n1=v.size();
	if(n1%2!=0)
	cout<<"IGNORE HIM!";
	else
	cout<<"CHAT WITH HER!";
	return 0;
}
