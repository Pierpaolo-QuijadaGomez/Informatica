#include <stdio.h>
#include <stdlib.h>

int main()
{
     char choice;
    printf("Good morning");
    printf("\nWould you like a cup of coffe ?");
    scanf("%c", &choice);
     if (choice=='Y')
         printf("Here is a cup of coffe\n");
    printf("See you soon");
    return 0;
}