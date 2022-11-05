#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int iColemanLiau();

//This program calculates the school level to complete a given text
int main(void)
{
    string text = get_string("Text: ");

    int cLetters = 0, cWords = 0, cSentences = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            cLetters++;
        }

        if(text[i] == ' ')
        {
            cWords++;
        }

        if(text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            cSentences++;
        }

    }

    int CLI = iColemanLiau(cLetters, cWords, cSentences);

    if (CLI > 16)
    {
        printf("Grade 16+\n");
    }
    else if (CLI < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", CLI);
    }
}

// Index Coleman-Liau
int iColemanLiau (int letters, int words, int sentences)
{
    words++;
    letters = (100.00 * letters) / words;
    sentences = (100.00 * sentences) / words;

    int index = round((0.0588 * letters) - (0.296 * sentences) - 15.8);
    return index;
}