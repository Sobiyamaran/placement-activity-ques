#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    temp=n;
    printf("enter the no");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("palindrome");
    }
    else
        printf("not palindrome");
}
