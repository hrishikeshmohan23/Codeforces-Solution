#include <iostream>
using namespace std;
int main()
{
	string s,x,y;
	int n,t,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		c=0;
		cin>>n;
		cin>>s;
		for(int j=1;i<n;j++)
		{
			cin>>x;
			for(int k=0;k<10;k++)
			{
				if(s[k]!=x[k] )
				{
					s[k]='1';
				}
				else
					s[k]='0';
			}
			if(j==n-1)
			{
				for(int g=0;g<10;g++)
				{
					if(s[g]=='1')
					c+=1;
				}
				cout<<c<<endl;
			}
			if(i==t-1 && j==n-1)
			{
				exit(0);
				}	
		
		}
	
	}
				
	return 0;
}
