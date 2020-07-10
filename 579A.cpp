#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,sum=0;
	cin>>n;
	while(n)
	{
		if(n%2)
		{
			n--;
			sum++;
		}
		n/=2;
	}
	
	cout<<sum;
}
