#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t[5],a[5],count=0,sum=0,n=5;
	cin>>t[0]>>t[1]>>t[2]>>t[3]>>t[4];
	sort(t,t+n);
	int i=0;
	for(int i=0;i<n;i++)
	{
		if(count>=3)
		break;
		for(int j=0;j<n;j++)
		{
			
			if(i!=j)
			{
				if(t[i]==t[j])
				{
					a[j]=0;
					count++;
				}
				else
				a[j]=0;
				cout<<count<<endl;	
			}
		}
	}
	for(int i=0;i<n;i++)
		sum+=a[i];
		cout<<sum;
}
