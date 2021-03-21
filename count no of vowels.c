#include<stdio.h>
void main()
{
    char str[50];
    printf("enter the string");
    scanf("%s",&str);
    int i=0;
    int count=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("%d\n",count);
}
