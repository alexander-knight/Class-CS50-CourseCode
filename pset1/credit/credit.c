#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    // We take the visa card number
    do
    {
        unsigned long long cardnum = get_long("Card Number: ");
    }
    while ( cardnum < 1000000000000 || cardnum > 10000000000000000)
    
}

int number_isolator(int cardnum,)
{
    ( ( cardnum mod (10^i+1) - cardnum mod (10^i) ) / (10^i) )
}



// Other idea, using the ltoa and atol function

int cardlen = strlen(ltoa(cardnum));
int init_sum;
for (int i = cardlen - 1; i <= 0 ; i += 2)
{
    init_sum +=  atol ((cardnum[i])  * 2;
}

int sec_sum;
for (int i = cardlen; i <= 0; i += 2)
{
    sec_sum += atol (cardnum[i])
}
