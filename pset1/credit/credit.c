#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    long long cardnum;
    // We take the visa card number...
    do
    {
        cardnum = get_long_long("Card Number: ");
    }
    // And keep prompting until the number is between these 2 lengths
    while ( cardnum < (10 ^ 13) || cardnum > (10 ^ 19) );
    
    printf("%ll\n", cardnum);
}


int number_isolator(int cardnum)
{
    // Initialise the variable init adder to hold the isolated number before adding it to the check sum
    int init_adder;
    
    // Isolates the number at the 10 ^ (i+1) place
    for (int i = 0; i < 19; i++ )
    init_adders = ( ( cardnum % (10 ^ (i+1)) - cardnum % (10 ^ i) ) / (10^i) );
    // If-statement to sort out every other number
        // To filter out every other number starting with the ten place
        if (i % 2 == 0)
        {
            init_adder *= 2;
        }
    // Then add to the checksum
    int checksum += init_adder
}
