#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int i=1;
		for(int k=3;k<=n;k+=pow(2,i))
		{
			if((n%k==0)){cout<<(n/k)<<endl;break;}
			i++;
			}
		}
		
}
