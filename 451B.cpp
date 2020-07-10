#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,count=0,flag=0;
	cin>>n;
	long long a[n],b[2],c[n];
		for(int i=0;i<n;i++)
		{
			cin>>c[i];
			a[i]=c[i];
		}
		sort(c,c+n);
		int j=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=c[i])
			{
				count++;
				if(j<2)
				{
					b[j]=i+1;
					j++;
				}
			}
		}
		if(count==0)
		cout<<"yes\n"<<1<<" "<<1;
		else if(count==2 )	
		cout<<"yes\n"<<b[0]<<" "<<b[1];
		else
		cout<<"no";
}
	/*else
	{
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			count++;
			b[0]=i;
			b[1]=i+1;
		}
		if(count>2)
		{
			flag=1;
			break;
		}
		cout<<count<<endl;
	}
	if(count==1 && flag==0)
	{
		cout<<"yes\n"<<b[0]<<" "<<b[1];
	}
	if(flag==1)
	{
		cout<<"no";
	}

}*/
