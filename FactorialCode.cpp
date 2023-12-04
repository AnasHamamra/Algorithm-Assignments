#include<iostream.h>
using namespace std;
long long iterativeFact(long long n)
{ long long f=1;
  for(long long i=1;i<=n;i++)
        f*=i;
  return f;
}
long long recursiveFact(long long n)
{if(n==1)
  return 1;
 return n*recursiveFact(n-1);}
main()
{
	cout<<recursiveFact(5)<<endl;
	cout<<iterativeFact(5)<<endl;
}