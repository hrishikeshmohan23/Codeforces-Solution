
using namespace std;

int main()
{
	int q,a,b,s,n,sum=0;
	for(int i=0;i<q;i++)
	{
		sum=0;
		cin>>a>>b>>n>>s;
		sum=(a*n)+b;
		if(sum>=s)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
	return 0;
}
