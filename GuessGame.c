//Hello I am Manjistha and I am writing the code for s simple guessing game!
#include<stdio.h>
#include<string.h>
int main()
{
    char ans[]="Chess";
    char guess[50];
    printf("It's an indoor game...\n");
    do
    {
        printf("Guess the sport?\n");
        fflush(stdout);
        scanf("%s",&guess);
    }
    while(strcmp(ans,guess)!=0);
    puts("Eureka!Your answer is absolutely correct!");
    return 0;
}
