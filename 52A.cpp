#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,count1=0,count2=0,count3=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
			count1++;
		else if(a[i]==2)
			count2++;
		else
			count3++;
	}
	if(count1>=count2 && count1>=count3)
		cout<<count2+count3;
	else if(count2>=count1 && count2>=count3)
		cout<<count1+count3;
	else
		cout<<count2+count1;
}
