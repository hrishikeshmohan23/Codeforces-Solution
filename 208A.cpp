
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s3,s1,s2="";
    cin>>s;
    int flag=0;
    s1="WUB";
    for(int i=0;i<s.size();i++)
    {
        s3=s.substr(i,3);
        if(s3.compare(s1)==0)
        {
            i+=2;
            if(s2.compare("")!=0)
            {
                if(flag==0)
                {
                    s2+=" ";
                    flag=1;
                }
            }
        }
        else
        {
            s2+=s[i];
            flag=0;
        }
    }
    cout<<s2;
}
