#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,diff,flag=0,big,small,j=1,count=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		count=0;
		big=0;
		small=0;
		j=1;
		cin>>a>>b;
		if(a==b)
		{
			flag=1;
		}
		else
		{
			if(a>b)
			{
				big=a;
				small=b;
			}
			else
			{
				big=b;
				small=a;
			}
			diff=big-small;
			while(big>=small && diff>=j)
			{
				small+=j;
				diff=big-small;
				j++;
				count++;
				cout<<small<<" "<<big<<" "<<j<<" "<<count<<endl;	
			}
			diff1
			j--;
			if(big==small)
			{
				flag=1;
			}
			else
			{
				while(a!=b)
				{
					big+=j;
					j++;
					count++;
					small+=j;
					j++;
					count++;

				}	
			}
			
		}
		cout<<count<<endl;;
	}
}
