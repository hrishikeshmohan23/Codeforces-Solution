#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i=0,x,sum;
	cin>>x;
	x=pow(10,9);
		while(sum<=x && i<4)
		{
			sum=(i*(i+1))+(((i-1)*i)/2);
			i++;
			cout<<sum<<" "<<i<<endl;
		}
	}
