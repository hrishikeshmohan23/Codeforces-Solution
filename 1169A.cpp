#include<bits/stdc++.h>
using namespace std;
int main()
{

    int f=0,i,j,n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    while(a!=b && c!=d)
    {
      cout<<a<<" "<<c<<endl;
        a++;
        c--;
        if(a==c)
        {
            cout<<"YES";
            f=1;
            break;
        }
        else if(a>c)
        break;
        if(a==n)
        a=1;
        if(c==1)
        c=n;
    }
    if(!f)
    cout<<"NO";

}
