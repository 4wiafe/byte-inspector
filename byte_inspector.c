
#include <stdio.h>
#include <string.h>
#include <limits.h>

// Byte Inspector Program
int main(int argc, char *argv[])
{
    int bit;
    unsigned char value;

    // Loop to collect arguments from the terminal
    for (int i = 1; i < argc; i++)
    {
        printf("Argument: %s\n", argv[i]);
    }

    return 0;
}
