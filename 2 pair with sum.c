#include<stdio.h>
void main()
{
    int a[50],output[50];
    int n,i,sum,j;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the sum");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(sum==a[i]+a[j])
            {
              /*  output[k]=i;
                output[k+1]=j
                k=k+2;*/
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }

}
