#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c;
  cin >> a >> b >> c;
  int x = min ( a , min ( b , c ) );
  if ( x == a )
  {
      if( c < a + 2 )
      {
        x= c - 2 + c -1 +c;
      }
      else if(b < a + 1)
      {
        x = b-1 + b + b+1;
      }
      else
      {
        x = a + a + 1 + a + 2;
      }
  }
  else if( x == b )
  {
    if ( c < b + 1 )
    {
      x= c - 2 + c - 1 + c;
    }
    else
    {
      x = b-1 + b + b + 1;
    }
  }
  else
  {
    x= c - 2 + c - 1 + c;
  }
  cout << x;
}
