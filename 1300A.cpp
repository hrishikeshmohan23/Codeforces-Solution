#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int a[n],count=0,sum=0,prod=1,max=0,count2=0,count1=0;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			sum+=a[j];
			prod*=a[j];
			if(a[j]==0)
				count++;
		}
			if(sum==0)
				count1++;
			if(prod==0)
			{	
				if(count+sum==0)
					count2=count+1;
				else
					count2=count;
			}
			max=count1;
			if(count2>count1)
				max=count2;
		cout<<max<<endl;
		}
	}
				
		
	

