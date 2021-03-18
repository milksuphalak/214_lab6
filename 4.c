#include <stdio.h>
int main()
{
   int n,i,max,min,x,y;
    scanf("%d",&n);
    int p[n],s[2][n];
    for(i=0;i<n;i++)
    {
        p[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&s[0][i],&s[1][i]);
        p[s[0][i]]++;
        p[s[1][i]]++;
    }
}
