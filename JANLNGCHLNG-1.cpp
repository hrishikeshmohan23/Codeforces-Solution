#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,s,a[3],sum=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		sum=0;
		cin>>s>>a[0]>>a[1]>>a[2];
		sum=sum+w1+w2+w3;
		sum=sum/s;
		if(sum%s!=0)
			sum++;
		cout<<sum<<endl;
	}
}

