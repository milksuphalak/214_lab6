#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,j;
    scanf ("%d",&n);
    char sort[n][1000],s[1000];
    for (i=0;i<n;i++)
    {
        scanf ("%s",sort[i]);
    }
    for(i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (strcmp(sort[i],sort[j]) > 0)
            {
                strcpy(s,sort[i]);
                strcpy(sort[i],sort[j]);
                strcpy(sort[j],s);

            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%s\n",sort[i]);
    }
return 0;
}
