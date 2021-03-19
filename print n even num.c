#include<stdio.h>
void main()
{
    int a[50];
    int i,n;
    printf("enter no of numbers");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<n)
    {
        if(a[i]%2==0)
            printf("%d ",a[i]);
        i++;
    }
}
