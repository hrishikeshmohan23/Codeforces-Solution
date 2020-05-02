#include <iostream>

using namespace std;

int main()
{
	int n,x=0,c=0,flag=0,rem=0;
	cin>>n;
	x=n;
		if(n%4==0 || n%7==0 || n%47==0 ||n%74==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0)
		{
			cout<<"YES";
		}
	else
	{
	while(x!=0)
	{
		rem=x%10;
		x=x/10;
		if(rem!=4  && rem!=7)
		{
				flag=1;
				break;
		}
	}
	if(flag==1)
	cout<<"NO";
	else if(flag==1)
	{
		cout<<"YES";
	 } 
	}
	return 0;
}

