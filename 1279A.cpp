#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a[3];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		if(a[0]==a[1] && a[2]>=a[1])
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
