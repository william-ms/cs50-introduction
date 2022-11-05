#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long numCard = get_long("Enter the credit card number: "),
        cCard = numCard,
        iCard = numCard,
        lCard = numCard;
    int numOdd, numPair, doublePair, total = 0;
    int i = 0, j;

    // Count card digits
    do
    {
        i++;
        cCard /= 10;
    }
    while(cCard);

    j = i;
    do {
        iCard /= 10;
        j--;
    } while ((j - 2) > 0);

    // Luhn's Algorithm
    do
    {
        numOdd = lCard % 10;
        total += numOdd;
        lCard /= 10;
        numPair = lCard % 10;
        doublePair = numPair * 2;
        total += doublePair;
        lCard /= 10;
    }
    while (lCard);

    if ((total % 10) == 0)
    {
        if(i == 13 || i == 16)
        {
            if((iCard /= 10) == 4)
            {
                printf("VISA\n");
            }
        }
        else if(i == 15)
        {
            if(iCard == 51 || iCard == 52 || iCard == 53 || iCard == 54 || iCard == 55)
            {
                printf("MASTER CARD\n");
            }
        }
        else if(i == 16)
        {
            if(iCard == 34 || iCard == 37)
            {
                printf("EXPRESS\n");
            }
        }
        else{
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}