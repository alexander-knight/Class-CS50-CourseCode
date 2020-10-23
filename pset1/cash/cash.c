// Takes a float and outputs the least number of coins required to reach that amount
// using the following coin choices - .25, .10, .5, .1
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Takes as input a 2 decimal float
    float change_owed;
    do
    {
        change_owed = get_float("Change Owed: ");
    }
    while (change_owed < 0);
    
    // Converting to int to deal with floating point imprecision
    change_owed = change_owed * 100;
    change_owed = round(change_owed);
    change_owed = (int)change_owed;
    // printf("Change: %f", change_owed);
    
    int cents, dimes, nickels, pennies;
    
    for (cents = 0; change_owed >= 25; cents++)
    {
        change_owed -= 25;
    }
    // printf("Cents: %i\n", cents);
    // printf("Change: %f", change_owed);
    
    for (dimes = 0; change_owed >= 10; dimes++)
    {
        change_owed -= 10;
    }
    // printf("Dimes: %i\n", dimes);
    
    for (nickels = 0; change_owed >= 5; nickels++)
    {
        change_owed -= 5;
    }
    // printf("Nickels: %i\n", nickels);
    
    for (pennies = 0; change_owed >= 1; pennies++)
    {
        change_owed -= 1;
    }
    // printf("Pennies: %i\n", pennies);
    
    int coins = cents + dimes + nickels + pennies;

    printf("%i\n", coins);
}
