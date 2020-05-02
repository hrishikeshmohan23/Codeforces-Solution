#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	int n,x,count=0,count1=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<3;j++)
		{	
			 cin>>x;
			 if(x==1)
				count++;
		}
		if(count>=2)
			count1++;
	}
	cout<<count1;
	return 0;	
}
