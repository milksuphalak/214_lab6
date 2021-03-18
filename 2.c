#include <stdio.h>
int main()
{
    int n,i,m=0;
    scanf ("%d",&n);
    char x[2][n];
    for (i=0;i<2;i++)
    {
        scanf ("%s",x[i]);
    }
 for(i=0;i<n;i++)
    {
        if(x[0][i]==x[1][i])
        {
            m++;
        }
    }
    printf("%d %d",m,n-m);
    return 0;
}
