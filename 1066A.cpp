include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,L,v,l,r,count,x,y;
    cin>>t;
    while(t--)
    {
        count=0;
        x=0;
        y=0;
        cin>>L>>v>>l>>r;
        y=r/v-l/v;
        count=L/v;
        if(l%v==0)
        y++;
        count-=y;
        cout<<count<<endl;
    }
}
