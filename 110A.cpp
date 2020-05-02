#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int x=1,count=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='4' || str[i]=='7')
		{
		    count++;
		}
	}
	if(count==4 || count==7)
	cout<<"YES";
	else
	cout<<"NO";
}
		        
