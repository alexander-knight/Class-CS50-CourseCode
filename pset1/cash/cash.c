// Takes a float and outputs the least number of coins required to reach that amount
// using the following coin choices - .25, .10, .5, .1
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    // Takes as input a 2 decimal float
    float change_owed;
    do
    {
        change_owed = get_float("Change Owed: ");
    }
    while (change_owed < 0);

    int cents;
    for (cents = 0; change_owed > .25; cents++)
    {
        change_owed -= .25;
    }
    printf("%i\n", cents);
    int dimes;
    for (dimes = 0; change_owed > .1; dimes++)
    {
       change_owed -= .1;
    }
    printf("%i\n", dimes);
    int nickels;
    for (nickels = 0; change_owed > .1; nickels++)
    {
       change_owed -= .05;
    }
    printf("%i\n", nickels);
    int pennies;
    for (pennies = 0; change_owed > .1; pennies++)
    {
       change_owed -= .01;
    }
    printf("%i\n", pennies);
    int coins = cents + dimes + nickels + cents;

    printf("%i/n", coins);
}
