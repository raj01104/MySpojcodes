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
  int t=10;
   while(t--)
  {
   string str1,str2;
   cin>>str1>>str2;
   int n=str1.length();
   int m=str2.length();
   int arr[n];
   int arr1[n];
   fill(arr1,0);
   loop(i,0,n)
   arr[i]=str1[i]-48;

   for(int i=n-m,j=0;i<n;i++,j++)
   arr1[i]=str2[j]-48;




 for(int i=n-1;i>0;i--)
   {
     if(arr[i]>=arr1[i])
       arr[i]-=arr1[i];
    else
    {
       arr[i]=10+arr[i];
       arr[i]-=arr1[i];
       arr[i-1]-=1;
    }}
    arr[0]=arr[0]-arr1[0];

    
  
   loop(i,0,n-1)
    {
      arr[i+1]+=(arr[i]%2)*10;
      arr[i]=arr[i]/2;
    }
      arr[n-1]=arr[n-1]/2;
 

    int a[n];
    loop(i,0,n)
    a[i]=arr[i];


    int x;
    for(int i=n-1;i>0 ;i--)
    {
     x=a[i]+arr1[i];
     if(x>=10)
     {
      a[i-1]+=1;
      a[i]=x%10;
     }
     else
      a[i]=x;
     }
     a[0]=a[0]+arr1[0];
     int p=0,q=0;
     
     while(arr[p]==0 && p<n)
     p++;
     while(a[q]==0 && q<n)
     q++;

  if(q==n)
    cout<<0<<endl;
  else
 {
  loop(i,q,n)
  cout<<a[i];
  cout<<endl;
 }

  
  if(p==n)
    cout<<0<<endl;
  else
  {
  loop(i,p,n)
  cout<<arr[i];
  cout<<endl;
  }
  }
return 0;
}
 
 

