#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Using string syntax
    char name[] = "Nicky";

    // Using char arrays syntax ending in null terminator
    char name2[] = {'N', 'i', 'c', 'k', 'y', '\0'};

    // Using a pointer
    char *name3 = "Nicky";

    char ipt_name[60];

    printf("Please enter your name: ");
    gets(ipt_name);

    printf("Your name is: ");
    puts(name);

    return 0;
}