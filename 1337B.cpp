#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x,y,z;
		cin>>x>>y>>z;
		int f=0;
		while(x>0)
		{
			if(x>10 && y!=0)
			{
				x=(x/2)+10;
				--y;
			}
			else if(x<=10 && z>0)	
			{	
				x-=10;
				--z;
			}	
			else if(z>0 && x>0 && y==0)
			{
				
					x-=10;
					z--;
			}
			else
			{
				f=1;
				break;
			}
			
		}
		if(f)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
