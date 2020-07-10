#include<bits/stdc++.h>
using namespace std;
int main()
{
	int max1,max=0,min=0,n,count1=1,count2=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<" "<<a[i+1]<<" "<<count1<<" "<<count2<<endl;
		if((a[i]==a[i+1]) && a[i]==1)
			count1++;
		else if(a[i]==a[i+1] && a[i]==2)
			count2++;
		else if(count1!=0 && count2!=0)
		{
			min=count1;
			if(count2<min)
			{
				min=count2;
				count1=1;
				count2=1;
				max1=min*2;
			}
		}
		if(max<max1)
		max=max1;
	}
	cout<<max;
}
