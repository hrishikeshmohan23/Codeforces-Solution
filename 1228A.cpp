#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5],j=0,count=0,l,r,count1=0,count2=0,count3=0; 
	cin>>l>>r;  
	for(int i=l ; i<=r ; i++) 
    { 
        int num = i; 
        int x=i;
        while(num!=0)
        {
        	a[j]=num%10;
        	cout<<a[j]<<endl;
        	j++;
        	cout<<j<<endl;
        	count++;
        	num=num/10;
		}
	
		for(int i=0;i<count;i++)
		{
			for(int j=0;j<count;j++)
			{
				if(a[i]!=a[j] && i!=j)
					count1++;
					cout<<a[i]<<" "<<a[j]<<" "<<count1<<endl;
			}
		}
		break;
		if(count1==(pow(count,2)-count))
		{
			cout<<x<<" ";
			count3++;
		}
	}
	cout<<count1<<" "<<count2<<" "<<count3;
	
		if(count3==0)
		cout<<-1;
}
