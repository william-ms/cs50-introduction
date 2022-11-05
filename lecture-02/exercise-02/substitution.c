#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("The key must contain 26 characters.\n");
        return 1;
    }
    else
    {

    string key = argv[1];

    string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string abc = "abcdefghijklmnopqrstuvwxyz";

    string plaintext = get_string("plaintext: ");

    for (int j = 0, m = strlen(plaintext); j < m; j++)
    {
        for (int i = 0, n = strlen(key); i < n; i++)
        {
            if(plaintext[j] == ABC[i])
            {
                plaintext[j] = key[i];
                i = 26;
            }
            else if (plaintext[j] == abc[i])
            {
                plaintext[j] = tolower(key[i]);
                i = 26;
            }
        }
    }
    printf("ciphertext: %s\n", plaintext);
    return 0;
    }
}