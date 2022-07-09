//location of substring
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="This is a simple string.";
    char s2[40];
    char *pstr;
    pstr=strstr(s1,"simple");
    //replacing simple with sample
    strncpy(pstr,"sample",6);
    puts(s1);
    return 0;
}
