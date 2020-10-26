#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Prototyping card type identifier function
int card_type(long cardnum);
// And the number isolator function
int number_isolator(int cardnum)


int main(void)
{
    long cardnum;
    // We take the visa card number...
    do
    {
        cardnum = get_long("Card Number: ");
    }
    // And keep prompting until the number is between these 2 lengths
    while (    cardnum < (pow (10, 13))
            || cardnum > (pow (10, 19))
          );

    printf("%l\n", cardnum);




        
}


int number_isolator(int cardnum)
{
    // Initialise the variable init adder to hold the isolated number before adding it to the check sum
    int init_adder;

    // Isolates the number at the 10 ^ (i+1) place
    for (int i = 0; i < 19; i++ )
    {
        init_adder = (
                   ( cardnum % (pow (10, (i+1)))
                   - cardnum % (pow (10, (i)  ))
                   )
                   / (pow (10, i) )
                 );


        // If-statement to sort out every other number
        // To filter out every other number starting with the ten place
        if (i % 2 == 0)
        {
            init_adder *= 2;
        }
        
        // Then add to the checksum
    int checksum += init_adder;
    }


}

// Takes only a valid card and returns the card type (Amex, Mastercard or Visa)
int card_type(long cardnum)
{

}
