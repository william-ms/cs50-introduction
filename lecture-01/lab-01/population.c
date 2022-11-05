#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int nStart, nEnd, nBirth, nMortality, years = 0;

    do
    {
        nStart = get_int("What is the initial population size? ");
        if (nStart < 9)
        {
            printf("The population must have at least 9 individuals.\n");
        }
    }
    while(nStart < 9);

    do
    {
        nEnd = get_int("What is the final population size? ");
        if (nEnd < nStart)
        {
            printf("The final population must be greater than or equal to the initial population.\n");
        }
    }
    while (nEnd < nStart);

    do
    {
        nBirth = nStart / 3;
        nMortality = nStart / 4;
        nStart = (nStart + nBirth) - nMortality;
        years++;
    }
    while (nStart < nEnd);

    printf("Estimated time: %i years\n", years);
}