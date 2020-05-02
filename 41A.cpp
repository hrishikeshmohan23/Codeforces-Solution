#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int flag=0,i,j;
	cin>>s1;
	cin>>s2;
	for(i=0,j=s2.size()-1;i<s1.size(),j>=0;i++,j--)
	{
		if(s1[i]!=s2[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"NO";
	else
		cout<<"YES";
}
