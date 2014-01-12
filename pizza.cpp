#include<stdio.h>
int main()
{
    int h[501];
    int k[1001];
    int t, n, i,j , m;
    int a;
    int count;
    scanf("%d", &t);
    while(t-->0)
    {
        count =0;
            scanf("%d", &n);
            for(i=1; i<=n ; i++)
                scanf("%d", &h[i]);
            
            for(i=1; i<=1000; i++)
                k[i]=1001;
            for(i=1; i<=n; i++)
                {
                        scanf("%d", &a);
                        k[a]=1;
                }
                
            for(i=1; i<=1000; i++)
            {
               
                 j=1;
                m=i-1;
                for( ; j<=m ; j++, m--)
                {
                    if(k[i]> k[j]+k[m] )
                    {
                        k[i]=k[j]+k[m];
                        if(k[i]==2)
                                break;
                    }
                }
            }
            
            
            for(i=1; i<=n; i++)
            {
                a=2*h[i];
                count+= k[a];
                
            }
            
            printf("%d\n", count);
    }
    return 0;
} 
