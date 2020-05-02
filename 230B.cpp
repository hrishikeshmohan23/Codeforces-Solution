#include<bits/stdc++.h>
using namespace std;
bool Prime(long long n)
{
    if(n<2)
        return false;
    else if(n==2)
        return true;
    long long x=sqrt(n);
    if(n%2==0)
        return false;
        for(int j=3; j<=x; j+=2)
		{
            if(n%j==0)
                return false;
        }
    return true;
}
int main()
{
    long long num;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
	{
        cin>>num;
        long long sqr=sqrt(num);
        if(sqr*sqr==num && Prime(sqr)==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
