#include<stdio.h>
void main()
{
    int x=5;
    int y=10;
    int ans;
    ans=x||y;
    printf("%d\n",ans);
    ans=x && y;
    printf("%d\n",ans);
}