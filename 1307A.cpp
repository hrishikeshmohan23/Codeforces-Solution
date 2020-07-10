#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,d,count,flag=0;;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		count=0;
		flag=0;
		cin>>n>>d;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		while(d--)
		{
            for(int j = 1;j < n;j++)
            {
                if(arr[i] > 0)
				{
                    arr[i]--;
                    arr[i-1]++;
                    break;
                }
        }
    	}
        cout<<arr[0]<<endl;
}
}
