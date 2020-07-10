#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,x,temp,c=0,m,j;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		j=0;
		m=0;
		x=0;
		if(n<10)
		{
			cout<<n<<endl;
		}
		else
		{
			x=9;	
			temp=0;
			m=11;
			j=2;
			while(temp<=n)
			{
				while(temp<=pow(10,j) && temp<=n)
				{
					temp+=m;
					x++;
				}
				m=m+pow(10,j);
				j++;
				temp=m;
			}
			cout<<x-1<<endl;;
		}
		
	}
}
