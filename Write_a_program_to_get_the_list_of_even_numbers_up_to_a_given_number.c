#include<stdio.h>
int main()
{
    int u,l,i;
    scanf("%d%d",&u,&l);
    for(i=u;i<=l;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}