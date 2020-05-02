#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,s3="";
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.size();i++)
	{
		if((s1[i]=='1' && s2[i]=='0') || (s2[i]=='1' && s1[i]=='0'))
			s3+='1';
		else
		s3+='0';
	}
	cout<<s3;
}
