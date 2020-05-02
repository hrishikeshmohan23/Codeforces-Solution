#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,sum=0,x[1000010];

	cin>>a>>b>>c;

	for(int i=1;i<=1000000;i++)
	{
        for(int j = i;j<=1000000;j+=i)
        {
				x[j]++;
		}
	}

	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			for(int k=1;k<=c;k++)
			{
				sum+=x[i*j*k];
		}
	}

	}
	cout<<sum%(1073741824);;
}
