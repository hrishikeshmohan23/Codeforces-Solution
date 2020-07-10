#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,sum1=0,sum2=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=0,j=n-1;
	while(count!=n)
	{
		if(a[i]<a[j])
		{
			sum1+=a[j];
			j--;
			count++;
		}
		else
		{
			sum1+=a[i];
			i++;
			count++;
		}
		if(count==n)
			break;
		if(a[i]<a[j])
		{
			sum2+=a[j];
			j--;
			count++;
		}
		else
		{
			sum2+=a[i];
			i++;
			count++;
		}
		
	}
	cout<<sum1<<" "<<sum2;
}
