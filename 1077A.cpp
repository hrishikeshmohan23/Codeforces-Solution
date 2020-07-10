#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long sum,x,y,t,a,b,k;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		sum=0;
		x=0;
		y=0;
		cin>>a>>b>>k;
		x=k/2;
		y=k/2;
		if(k%2!=0)
		x++;
		sum=(x*a)-(y*b);
		cout<<sum<<endl;
	}
	
}
