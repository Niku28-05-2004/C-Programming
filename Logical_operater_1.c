#include<stdio.h>
int main()
{
    int x=5;
    int y=0;
    int ans;

  ans=++x||y++;
  printf("%d\n",ans);
  printf("%d\n",x);
  printf("%d\n",y);
  printf("-------------------\n");
  ans=x++&&++y;
  printf("%d\n",ans);
  printf("%d\n",x);
  printf("%d\n",y);
  printf("-----------------------\n");

  ans=--x||y--;
  printf("%d\n",ans);
  printf("%d\n",x);
  printf("%d\n",y);
}