#include <cs50.h>
#include <stdio.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    // compa
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    // 1. make all letters be upper case
    // 2. get ascii equivalent integer
    // 3. subtract 65, pass this to variable i
    //      3.5 instantiate score data to variable "score"
    // 4. get the number at array points[i] and add it to score
    // 5. return score
}
