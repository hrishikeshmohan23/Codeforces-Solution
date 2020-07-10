#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,flag=0;
	cin>>t;
	while(t--)
	{
		cin>>x;
		int arr[x];
		for(int i=0;i<x;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<x-2;i++)
		{
			for(int j=i+2;j<x;j++)
			{
				if(arr[i]==arr[j])
				{
					flag=1;
					break;
				}
			}
		}
			if(flag==0)
			cout<<"NO"<<endl;
			else
			cout<<"YES"<<endl;
		flag=0;
	}
}
