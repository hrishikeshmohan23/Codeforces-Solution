#include<iostream>
using namespace std;
int main()
{
	int k,n,w,sum=0,x=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++)
{
sum=sum+i*k;
}
x=n-sum;
if(x>0)
{
	cout<<"0";
}
else
{
	cout<<-x;
}
return 0;
}

