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
    max = p[0];
    for(i=0;i<n;i++)
    {
        if(p[i]>max)
        {
            x = i;
            max = p[i];
        }
    }
     if(p[s[0][x]-1]<p[s[0][x]-1])
        y = s[0][x]-1;
    else if(p[s[0][x]-1]>p[s[0][x]-1])
        y = s[1][x]-1;
    else
         {
        if(s[0][x]<s[1][x])
            y = s[0][x]-1;
        else
            y = s[1][x]-1;
    }
    printf("%d %d",x+1,y+1);
return 0;
}
