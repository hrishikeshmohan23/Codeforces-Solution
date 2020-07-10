#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			int x=0;
        	x=x+a[i][j];
        	if(i-1>-1)
            	x=x+a[i-1][j];
        	if(j-1>-1)
           		x=x+a[i][j-1];
        	if(j+1<3)
            	x=x+a[i][j+1];
        	if(i+1<3)
            	x=x+a[i+1][j];
        	if(x%2==0)
            	a[i][j]=1;
        	if(x%2!=0)
            	a[i][j]=0;
            cout<<a[i][j];
        }
        cout<<endl;
	
	}
}
