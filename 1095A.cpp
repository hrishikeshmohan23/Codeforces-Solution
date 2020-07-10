#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char a[100];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int j=1,k=1;;
	while(j<=n)
	{
		cout<<a[j];
		j+=k;
		k++;
	}
}
