#include<stdio.h>
int main()
{

    char str[]="MANJISTHA";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        printf("character=%c\t",str[i]);
        printf("Address=%p\n",&str[i]);
    }
    return 0;
}
