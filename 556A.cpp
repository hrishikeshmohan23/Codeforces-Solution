#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,count0=0,count1=0,min,count;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
			count0++;
		else if(s[i]=='1')
			count1++;	
	}
	count=count0+count1;
	min=count0;
	if(min>count1)
		min=count1;
	count-=(min*2);
	cout<<count;
	
}
