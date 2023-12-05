#include<stdio.h>
int main()
{
    int x=5;
    int y=6;
    int ans;
    ans=x<<3;
    printf("%d\n",ans);
    ans=y>>2;
    printf("%d\n",ans);
    ans=++y>>2;
    printf("%d\n",ans);
}