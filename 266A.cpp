#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,i;
	cin>>i;
	cin>>s;
	i--;
	int count=0;
	while(i!=0)
	{
		if(s[i-1]==s[i])
		{
	
			count++;
		}
		i--;
	}
	cout<<count;
}
