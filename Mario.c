#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    int h;

    do
    {
        h = get_int("Enter A height Between 1 and 12 \n");
    } 

    while (h < 1 || h > 12);
    
    for (int i = 1; i <= h; i++)
    {
        for (int n = 0; n < (h - i); n++)
        {
            printf(" ");
        }

        for (int m = 0; m < i; m++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for (int m = 0; m < i; m++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}

