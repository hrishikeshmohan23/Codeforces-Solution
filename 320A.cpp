#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=0;
	string s;
	cin>>s;
	int i=0;
	while(i<s.size())
	{
		if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
			i+=3;
		else if(s[i]=='1' && s[i+1]=='4')
			i+=2;
		else if(s[i]=='1')
			i+=1;
		else
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
	
