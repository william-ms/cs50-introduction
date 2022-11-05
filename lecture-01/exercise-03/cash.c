#include <cs50.h>
#include <stdio.h>

int main(void) {

    int n25 = 4, t25 = 0,
        n10 = 6, t10 = 0,
        n5 = 3, t5 = 0,
        n1 = 10, t1 = 0;

    float troco;

    do {
        troco = get_float("Insira o valor do troco: R$");

        if(troco < 0)
        {
            printf("Valor inválido!\n");
        }

        else if (troco == 0)
        {
            printf("Não tem troco");
        }
    } while(troco <= 0);

    while (troco >= 0.25 && t25 < n25)
    {
        troco -= 0.25;
        t25++;
    }

    while (troco >= 0.10 && t10 < n10)
    {
        troco -= 0.10;
        t10++;
    }

    while (troco >= 0.05 && t5 < n5)
    {
        troco -= 0.05;
        t5++;
    }

    while (troco >= 0.01 && t1 < n1)
    {
        troco -= 0.01;
        t1++;
    }

    printf("Entregue ao cliente:\n");
    printf("%i moedas de 25\n", t25);
    printf("%i moedas de 10\n", t10);
    printf("%i moedas de 5\n", t5);
    printf("%i moedas de 1\n", t1);
}


