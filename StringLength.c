#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter a string:\n");
    gets(str);//same as scanf("%s,&str);
    printf("The length of the string is %u characters long.",(unsigned)strlen(str));
    return 0;
}
