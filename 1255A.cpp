#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a,b,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		n=0;
		cin>>a>>b;
		if(a>b)
		{
			n=(a-b)/5;
			n+=(((a-b)%5)/2);
			if(((a-b)%5%2!=0))
			n+=1;
		}
		else
		{
			n=(b-a)/5;
			n+=(((b-a)%5)/2);
			if(((b-a)%5%2!=0))
			n+=1;
		}
		cout<<n<<"\n";
	}
}
