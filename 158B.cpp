#include<iostream>

using namespace std;

int main()
{
	int n,sum=0,x=0,count1=0,count2=0,count3=0,count4=0,c=0,X=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==1)
		count1++;
		else if(x==2)
		count2++;
		else if(x==3)
		count3++;
		else if(x==4)
		count4++;		
	}
	c=c+count4+count3+count2/2;
	count1=count1-count3;
	if(count2%2==1)
	{
	count1=count1-2;
	c=c+1;
	}
	if(count1>0)
	{
	c+=count1/4;
	if(count1%4!=0)
	c+=1;
	}
	cout<<c;		
    return 0;
}
