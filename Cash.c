#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

void greedy_algorithm(float change);

int main(void)
{
    float change = get_float("Change: ");

    greedy_algorithm(change);
}

void greedy_algorithm(float change)
{
    int Qurters = 0;
    int Dimes = 0;
    int Nickels = 0;
    int Pennies = 0;

    while (change > 0.25)
    {
        Qurters += 1;
        change -= 0.25;
    }
    while (change > 0.10)
    {
        Dimes += 1;
        change -= 0.10;
    }
    while (change > 0.05)
    {
        Nickels += 1;
        change -= 0.05;
    }
    while (change > 0.01)
    {
        Pennies += 1;
        change -= 0.01;
    }

    printf("Your Change Consists Of: ");
    printf("Qurters %i\n", Qurters);
    printf("Dime %i\n", Dimes);
    printf("Nickels %i\n", Nickels);
    printf("Pennies %i\n", Pennies);
}
