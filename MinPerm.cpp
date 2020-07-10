#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,n,x,temp;
	int a[100];
	cin>>q;
	int s;
	for(int i=0;i<q;i++)
	{
		cin>>n;
		s=n-1;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		for(int j=n-2;j>=0;j--)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		 	s--;
			
		}
		cout<<"S="<<s<<endl;
		for(int j=0;j<n;j++)
		{
		    cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
