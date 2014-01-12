#include<iostream>
#include<stdio.h>
typedef unsigned long long ll;
using namespace std;
 
int main()
{
  ll t;
  scanf("%lld",&t);
   
  while(t--)
  {
    ll n;
    scanf("%lld",&n);
    ll x=n*(n+2)*(2*n+1);
    if(n%2==1)
      printf("%lld\n",(x-1)/8);
    else
      printf("%lld\n",x/8);
  }
return 0;
}
 
 

