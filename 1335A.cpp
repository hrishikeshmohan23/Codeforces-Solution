#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		if(n%2)
		{
			n/=2;
			cout<<n<<endl;;
		}
		else
		{
			n/=2;
			n--;
			cout<<n<<endl;;
		}
		
	}
}
