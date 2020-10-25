#include <cs50.h>
#include <stdio.h>

// objective : create an ASCII art to create a pyramid between 1 to 8 tall, depending on user input//
// must only accept input of an integer between 1 and 8//
// shouldnt be to hard, heh//


int get_positive_int(void);

int main(void)
{
    int number = get_positive_int();
        for (int i = 0; i < number; i++)
        {
             for (int s = 8 - i; s != 0; s--)
            {
                printf(" ");
            }
            for (int j = 0; j < i + 1 ; j++)
            {
                printf("#");
            }
            printf("  ");
            for (int j = 0; j < i + 1 ; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    printf("\n");
}




// Prompt user for positive integer
// Shamelessly stolen from the positive.c source code from the CS50 page
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("%s", "Positive Integer: ");
    }
    while (n < 0 || n > 9);
    return n;
}

//Print Pyramid function? abstract it away from the set commands?
//or, better yet, remove the arbitrary limit of 8 levels
