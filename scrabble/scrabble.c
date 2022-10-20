#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

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
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}
int compute_score(string word)
{

    // TODO: Compute and return score for string
    int score = 0;

// to go through the string length with each letter and keeps going by one letter through thr word
    for (int i = 0; i < strlen(word); i++)
    {
        if (isupper(word[i]))
//(word[i] > 65 && word[i] < 90)
        {
//to find the score minus the difference from upper case to the ascii table
            score = score + POINTS[word[i] - 65];
        }
//to go through each letter inputted to check if it's lowercase
        if (islower(word[i]))
//(word[i] > 97 && word[i] < 122)
        {
//to find the score minus the difference from upper case to the ascii table
            score = score + POINTS[word[i] - 97];
        }
    }
    return score;

}