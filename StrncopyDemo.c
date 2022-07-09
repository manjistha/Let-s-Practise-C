//demo of strncopy
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],s2[40];
    printf("Enter the first string:\n");
    gets(s1);
    strncpy(s2,s1,5);
    //s2[6]='\o';
    puts(s1);
    puts(s2);
    return 0;
}
