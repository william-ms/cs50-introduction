#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Caesar Cipher
int main(int argc, string argv[])
{
    if(argc != 2){
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int j = 0; j < strlen(argv[1]); j++){
        if(argv[1][j] < '0' || argv[1][j] > '9')
        {
            printf("Usage: ./caesar key\n");
            j = strlen(argv[1]);
            return 1;
        }
        else
        {
            int key = atoi(argv[1]);
            string text = get_string("plaintext: ");

            for (int i = 0, n = strlen(text); i < n; i++)
            {
                if((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
                {
                    if(((text[i] + key) > 'Z' && (text[i] + key) < 'a') || (text[i] + key) > 'z')
                    {
                        text[i] = (text[i] - 26) + key;
                    }
                    else
                    {
                        text[i] = text[i] + key;
                    }
                }
            }
        printf("ciphertext: %s\n", text);

        j = strlen(argv[1]);
        return 0;
        }
    }
}