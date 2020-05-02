#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,s3,s4;
	int flag=0;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	s4=s1+s2;
	sort(s4.begin(),s4.end());
	sort(s3.begin(),s3.end());
	if(s4.size()==s3.size())
	{
		for(int i=0;i<s4.size();i++)
		{
			if(s4[i]!=s3[i])
			{
				flag=1;
				break;
			}
		}
	}
	else
		flag=1;
	if(flag==1)
		cout<<"NO";
	else
		cout<<"YES";
}
