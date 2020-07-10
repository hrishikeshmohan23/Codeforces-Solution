#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,x,n,count2=0,count1=0;
	cin>>x;
	while(x--)
	{
		cin>>n;
		count1=0;
		count2=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a%2!=0)
			count1++;
			else
			count2++;
		}
		if(count1==n || count2==n)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
