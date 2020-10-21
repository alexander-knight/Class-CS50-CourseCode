#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

// Leaving space here to prototype array ave funtion
// int array_ave()

int main(void)
{
    // Borrowed from the cs50 man pages on get string
    string text = get_string("Input: ");
    int text_len = strlen(text);
    int word_count = 0;
    int sentence_count = 0;
    printf("Letter count: %i\n", text_len);
    // Text proccessing portion of the code. for loop iterates over every
    for (int i = 0; i < text_len; i++ )
        // "if" conditional to start couting
        {
        if  (text[i] == ' ')
        {
            word_count += 1;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentence_count += 1;
        }
        //printf("Output: %c\n", text[i]);
        }
    // final computation of readability index
    int read_idx = 17;
    // 0.0588 * L - 0.296 * S - 15.8
    printf("Word count : %i\n", word_count + 1 );
    printf("Sen. count : %i\n", sentence_count);
    // Print out readability index
    if (read_idx < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (read_idx > 1 && read_idx < 16)
    {
        printf("Grade %i.\n", read_idx);
    }
    else
    {
        printf("Grade 16+\n");
    }
}

