#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count1=0,count2=0,n;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='D')
			count1++;
		else if(s[i]=='A')
			count2++;
	}
	if(count1>count2)
		cout<<"Danik";
	else if(count2>count1)
		cout<<"Anton";
	else
		cout<<"Friendship";
}
