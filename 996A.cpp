#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,x;;
	cin>>n;
	count+=(n/100);
	if(n%100!=0)
	{
		x=n%100;
		count+=(x/20);
		if(n%20!=0)
		{
			x=n%20;
			count+=(x/10);
			if(n%10!=0)
			{
				x=n%10;
				count+=(x/5);
				if(n%5!=0)
			{
				x=n%5;
				count+=(x/1);
			}
			}
		}
	}
	cout<<count;
}
