#include<stdio.h>
void main()
{
    int a,b,c,large;
    printf("enter the three");
    scanf("%d%d%d",&a,&b,&c);
    large=((((a>b)?a:b) > c)?((a>b)?a:b):c);
    printf("%d",large);

}
