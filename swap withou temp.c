#include<stdio.h>
void  main()
{
    int a,b;
    printf("enter nnumbers\n");
    scanf("%d %d",&a,&b);
    printf("\nBEFORE SWAPPING");
    printf("%d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAFTER SWAPPING");
    printf("%d %d",a,b);
}
