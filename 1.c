#include<stdio.h>
int a=10;
void fun()
{
    printf("Have Fun\n");
}
void main()
{
    int y=90;
    printf("Start Main\n");
    fun();
    printf("%d\n",y);
    printf("%d\n",a);
    printf("End Main\n");
}