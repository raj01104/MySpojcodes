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
bool myfn(int x,int y){return (x>y);}
int main()
{
  int t;
  si(t);
  int ct=0; 
  while(t--)
  {
    int n,m;
    si(n); 
    si(m);
    int arr[m];
    int x=0;
    loop(i,0,m){
    si(arr[i]);
    x+=arr[i];
    }
    sort(arr,arr+m,myfn);
    
    //cout<<"hell"<<endl;
    int sm=0,mn=INT_MAX;
    int cnt=0,j=0;
    printf("Scenario #%d:\n",++ct);

    for(int i=0;i<m;)   
    {
      if(sm>=n)
      {
        pi(cnt);
        break;
      }
      else
      {
        sm+=arr[i];
        cnt++;
        i++;
      }
   }
  if(n>x)
    printf("impossible\n");

    printf("\n");
 } 
return 0;
}
 
 

