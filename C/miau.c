#include <cs50.h>
#include <stdio.h>

void miau(int n);

int main(void)
{
    int resposta = get_int("Quantas vezes voce ama o jumiau? ");
    miau(resposta);
}

void miau(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (i <= 1)
        {
            printf("Eu amo o jumiau %d vez! \n", i);
        }
        else
        {
            printf("Eu amo o jumiau %d vezes! \n", i);
        }
    }
}
