#include<iostream>
using namespace std;
int main()
{
	long long int x,sum;
	cin>>x;
	sum=x/5;
	if(x%5!=0)
	{
		sum+=1;
	}
	cout<<sum;
	return 0;
}
