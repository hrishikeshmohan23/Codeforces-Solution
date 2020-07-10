#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,flag=0,a[4];
	cin>>t;
	while(t--)
	{
		flag=1;
		int sum=0,x=0,y=0;
		cin>>a[0]>>a[1]>>a[2]>>a[3];
		x=a[1]-a[0];
		y=a[2]+a[3];
		if(x%y==0)
		{
			sum=x/y;
			cout<<sum<<endl;
			flag=0;
		}
		if(flag==1)
		cout<<-1<<endl;
			
	}
}
