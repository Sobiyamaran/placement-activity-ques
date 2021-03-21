#include<stdio.h>
int sum=0;
int digitsum(int n)
{
    int r;
    if(n)
    {
        r=n%10;
        sum=sum+r;
        digitsum(n/10);
    }
    return sum;
}
void main()
{
    int n,sum=0,rem,temp;
    printf("enter the number");
    scanf("%d",&n);
   /* temp=n;
     while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    //sum=digitsum(n);*/
    sum=digitsum(n);
    printf("%d",sum);
}
