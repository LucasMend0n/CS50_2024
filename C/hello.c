#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string resposta = get_string("Qual seu nome? ");
    printf("Hello, %s\n", resposta);
}
