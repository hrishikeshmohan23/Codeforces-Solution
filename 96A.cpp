#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,flag=0,x,count=0;
	string a;
	cin>>a;
	n=((a.size())-1);
	x=a[0];
	for(int i=0;i<n+1;i++)
	{
		if(x==a[i])
		{
			count++;
		}
		else
		count=1;
		x=a[i];
		if(count==7)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"YES";
	}
	else
	cout<<"NO";
	return 0;  
}
