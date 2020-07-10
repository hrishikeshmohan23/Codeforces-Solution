#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		
		int n,count=0,counte=0,counto=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2 && i%2==0)
			counte++;
			else if(a[i]%2==0 && i%2)
			counto++;
		}
		if(counte==counto)
		cout<<counto<<endl;
		else
		cout<<-1<<endl;
		
	}
}
