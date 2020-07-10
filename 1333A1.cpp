#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int T,n,m,l,i;
    cin>>T;
    for(l=0;l<T;l++)
    {
        cin>>n>>m;
        int b=0,w=0;
        if((n*m)%2!=0)
        {
            for(i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if((i+1)*(j+1)==n*m)
                    {
                        cout<<"B";
                        break;
                    }
                    if((i+j)%2==0)
                    {
                        cout<<"B";
                        b++;
                    }
                    else
                    {
                        {
                            cout<<"W";
                            w++;
                        }
                        
                    }
                    
                }
                cout<<"\n";
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if((i+1)*(j+1)==n*m)
                    {
                        cout<<"B";
                        break;
                    }
                    else if(i==n-2 && j==m-1)
                    {
                        cout<<"B";
                    }
                    else if((i+j)%2==0)
                    {
                        cout<<"B";
                        b++;
                    }
                    else
                    {
                        {
                            cout<<"W";
                            w++;
                        }
                        
                    }
                    
                }
                cout<<"\n";
            }
 
        }
    }
}
