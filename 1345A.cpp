#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	while(x--)
	{
		long long a,b;
		cin>>a>>b;
		if((a==1 || b==1) || (a==2 && b==2))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
}
