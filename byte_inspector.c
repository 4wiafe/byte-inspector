
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

        // Loop to print the characters of the argument, their ascii value and their hex value
        for (int j = 0; j < strlen(argv[i]); j++)
        {
            value = (unsigned char)argv[i][j];

            printf("%c : %u : %X : ", argv[i][j], value, value);

            for (int k = CHAR_BIT - 1; k >= 0; k--)
            {
                bit = (value >> k) & 1;

                printf("%d", bit);
            }

            printf("\n");
        }
    }

    return 0;
}
