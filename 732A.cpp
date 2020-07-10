#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r,count=1;
	cin>>k>>r;
	while((count*k-r)%10!=0)
	{
		if((count*k)%10==0)
		break;
		count++;
		
	}
	cout<<count;
 } 
