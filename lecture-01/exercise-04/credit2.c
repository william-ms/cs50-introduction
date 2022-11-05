#include <cs50.h>
#include <stdio.h>

int main(void) {
   long card = get_long("Informe o numero deo cartão: ");
   int numCard[20];

   for (int i = 0; i < numCard.length; i++)
   {
      numCard[i] = card[i];
   }

   printf(numCard);
      
}
