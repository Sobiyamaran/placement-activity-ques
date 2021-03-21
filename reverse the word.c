#include<stdio.h>
void main()
{
    char str[50];
    char temp;
    printf("enter the string");
    scanf("%[^\n]s",str);
    int i=0,count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
   // printf("%d ",count);
    for(i=0;i<count/2;i++)
    {

       //printf("%c ",str[i]);
       temp=str[i];
       str[i]=str[count-i-1];
       str[count-i-1]=temp;
    }
    i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    //printf("%d",str);
}
