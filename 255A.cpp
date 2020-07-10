#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max,sum1=0,sum2=0,sum3=0;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	{	
		cin>>a[i];
		if(i%3==1)
			sum1+=a[i];
		else if(i%3==2)
			sum2+=a[i];
		else
			sum3+=a[i];
	}
	max=sum1;
	if(max<sum2)
		max=sum2;
	if(max<sum3)
		max=sum3;
	if(max==sum1)
		cout<<"chest";
	else if(max==sum2)	
		cout<<"biceps";
	else
		cout<<"back";
}
	
	
	
		

