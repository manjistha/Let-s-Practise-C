//string tokenizer strtok demo
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="It's a wonderful-day";
    char *pch;
    printf("Splitting the string %s into tokens",s1);
    pch=strtok(s1," ,.-");
    while(pch!=NULL)
    {
        printf("%s\n",pch);
    }
    return 0;
}
