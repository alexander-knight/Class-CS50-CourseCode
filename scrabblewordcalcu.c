#include <cs50.h>
#include <stdio.h>

// Declare score counting function
int compute_score(string word);

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if(score1 > score2)
    {
        printf("Player 1 wins!");
    }
    else if(score1 < score2)
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    // .1 get len of array and assign it to var arraylen
    // .2 make loop here, repeat while counter var i >= arraylen
    // 1. make all letters be upper case - Run letter of index i to to upper
    // 2. get ascii equivalent integer - cast arr[i] as int
    // 3. subtract 65, pass this to variable i - subtract 65 from int arr[i]
    //      3.5 instantiate score data to variable "score" = 0
    // 4. get the number at arr[i] and add it to score
    //      4.5 repeat until out of letters
    // 5. return score
}
