#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // This part of the code takes in a number greater than 9
    int startingpop = 0;
    do
    {
        startingpop = get_float("Starting Population: ");
    }
    while(startingpop < 9);

    // This part of the code takes in a number greater thatn the Starting population
    int endingpop = 0;
    do
    {
        endingpop = get_float("Ending Population: ");
    }
    while (endingpop < startingpop);

    //This part of the code counts how many ticks it takes to reach the ending population
    int currentpop = startingpop;
    int years = 0;
    for (years = 0; currentpop < endingpop; years++)
        {
            int deaths = currentpop / 4;
            int births = currentpop / 3;
            currentpop = currentpop + births - deaths;
            // This bit here is to debug my code, and double check my math. turned it into a comment to sumbit to dear old Harvard
            // printf("Births:%i, Deaths:%i, Current Population:%i\n", births, deaths, currentpop);

        }
    printf("Years: %i\n", years);
}
