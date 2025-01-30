#include <stdio.h>
#include <stdlib.h>

typedef char *string;


int main(void)
{
    string name = malloc(50);

    printf("What's your name? ");
    scanf("%s",name);
    printf("Hello, %s\n", name);
}