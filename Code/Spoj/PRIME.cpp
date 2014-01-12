#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
 
 
#define si(n)                       scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define pi(n)                       printf("%d\n",n)
#define pc(n)                       printf("%c\n",n)
#define pl(n)                       printf("%lld\n",n)
#define pf(n)                       printf("%lf\n",n)
#define ps(n)                       printf("%s\n",n)
 
// Useful constants
 
#define INF                         (int)1e9
#define EPS                         1e-9
 
// Useful container manipulation / traversal macros
 
#define loop(i,a,b)                 for(int i=a;i<b;i++)
#define foreach(v,c)                for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define in(a,b)                     ( (b).find(a) != (b).end())
#define pb                          push_back
#define fill(a,v)                   memset(a, v, sizeof a)
#define sz(a)                       ((int)(a.size()))
#define mp                          make_pair
 
// Some common useful functions
 
#define MAX(a,b)                     ( (a) > (b) ? (a) : (b))
#define MIN(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)
#define SORT(a)                      ( sort(all(a))
#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())
 
typedef long long ll;
using namespace std;
 
int main()
{
  int t;
  si(t);
  ll arr[1000000];
  fill(arr,0);
  for(int i=2;i<1000;i++)
  {
    if(arr[i]!=1)
    {
    for(ll j=i*i;j<1000000;j+=i)
      arr[j]=1;
    }
  }

  int cnt=0;
  loop(i,2,1000000)
  if(arr[i]==0)
    cnt++;

  
  int H[cnt];
  int k=0;
  loop(i,2,1000000)
  {
    if(arr[i]==0)
    {
      H[k]=i;
      k++;
  }}

 
 while(t--)
  {
    ll n,m;
    sl(m);
    sl(n);
    int ct=0;
    int srt=sqrt(n);
    int x;
    ll y;

    if(n<1000000)
      x=n+1;
    else
      x=1000000;

    if(m<1000000)
    {
      for(int i=0;H[i]<x;i++)
      if(H[i]>=m && H[i]<=n)
       pi(H[i]);
    
    y=1000000;
    }
    else
    y=m;
       int flag=0;
       for(ll i=y;i<=n;i++)
       {
         flag=0;
         for(ll j=0;H[j]<=srt;j++)
         {
           if((i%H[j])==0){
             flag=1;
             break;
           }
          }
          if(flag==0)
            pl(i);
       }
  }
               

return 0;
}
 
 

