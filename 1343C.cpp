#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long p,sum=0,max=0,x=0;
		cin>>p;
		long long arr[p];
		for(int j=0;j<p;j++)
		cin>>arr[j];
		max=arr[0];
		for(int j=1;j<p;j++)
        {
            if(max<0)
            {
                if(arr[j]>0)
                {
                    sum+=max;
                    max=arr[j];
                }
                else if(arr[j]>=max && arr[j]<0)
                {
                    max=arr[j];
                }
            }
            else
            {
                if(arr[j]>=max && arr[j]>0)
                {
                    max=arr[j];
                }
                else if(arr[j]<0)
                {
                    sum+=max;
                    max=arr[j];
                }
                
            }
            
        }
		sum+=max;
		cout<<sum<<endl;
	}
}
