#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[5][5],pos1,pos2,sum=0;
   for(int i=0;i<5;i++)
   {
   		for (int j=0;j<5;j++)
   		{
   			cin>>a[i][j];
   			if(a[i][j]==1)
   			{
   				pos1=i;
   				pos2=j;
			}
		}
   }
    for(int i=0;i<5;i++)
   {
   		for (int j=0;j<5;j++)
   		{
   				if(a[i][j]==1)
   			{
   				pos1=i;
   				pos2=j;
			}
		}
   }
   if(pos1<2)
   sum=sum+(2-pos1);
   else
   sum+=(pos1-2);
	if(pos2<2)
   sum+=(2-pos2);
   else
   sum+=(pos2-2);
   cout<<sum;
}
   
   
