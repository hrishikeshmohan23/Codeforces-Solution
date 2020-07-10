#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x[3],t,dis,dis1,dis2,min;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		cin>>x[0]>>x[1]>>x[2];
		sort(x,x+3);
		if(x[0]==x[1] && x[1]==x[2])
			dis=0;
		else if(x[1]==x[0])
		{
			x[1]++;
			x[0]++;
			if(x[0]!=x[2])
				x[2]--;
		}
		else if(x[1]==x[2])
		{
			x[0]++;
			if(x[0]!=x[1])
			{
				x[1]--;
				x[2]--;
			}
		}
		else
		{
			x[0]--;
			x[1]--;
			x[2]--;
		}
		min=(x[1]-x[0])+(x[2]-x[0])+(x[2]-x[1]);
		cout<<min<<endl;
	}
}
