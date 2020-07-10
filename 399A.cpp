#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int A[a];
	for(int i=1;i<=a;i++)
	{
		A[i]=i;
	}
	for(int i=b-c;i<=(b+c);i++)
	{
		if(i>0)
		{
		if(i==1)
		{
			if(b==1)
			cout<<"("<<1<<")"<<" ";
			else
			cout<<1<<" ";
			continue;
		}
		else if(i==a)
		{
			if(b==a)
			cout<<"("<<b<<")";
			else
			cout<<a<<" ";
			break;
		}
		else if(i==b-c)
		{
			cout<<"<< "<<i<<" ";
		}
		else if(i==b)
		cout<<"("<<b<<")"<<" ";
		else if(i==b+c)
			cout<<i<<" >>"<<" ";
		else
		cout<<i<<" "; 
}
	}
}
