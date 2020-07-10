#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T,n,m,l,i;
    cin>>T;
    for(l=0;l<T;l++)
    {
        cin>>n;
        int a[n],b[n],max=0,min=0,k=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        if(a[0]!=b[0])
        {
            cout<<"NO"<<"\n";
            k=1;
        }
        if(a[0]==1)
        {
            max=1;

        }
        else if(a[0]==-1)
        {
            min=1;
        }
        if(a[0]==b[0])
        {
            for(i=1;i<n;i++)
            {
                if(b[i]>a[i])
                {
                    if(max!=1)
                    {
                        cout<<"NO"<<"\n";
                        k=1;
                        break;
                    }
                }
                else if(b[i]<a[i])
                {
                    if(min!=1)
                    {
                        cout<<"NO"<<"\n";
                        k=1;
                        break;
                    }
                }
                if(a[i]==1)
                {
                    max=1;
                }
                if(a[i]==-1)
                {
                    min=1;
                }
            }
        }
        if(k==0)
        {
            cout<<"YES"<<"\n";
        }
    }
}
