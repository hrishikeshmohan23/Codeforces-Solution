#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n-1;i++)
	cin>>a[i];
	int x=100;
	for(int i=n-2;i>=2;i--)
	{
		a[i+1]=a[i];
	}
	a[2]=x;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	for(int i=3;i<n;i++)
	a[i-1]=a[i];
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
	
}
