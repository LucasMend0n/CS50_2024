#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = get_int("Whats x");
    int y = get_int("Whats Y");

    if(x < y){
        printf("X is less than Y"); 
    }
}
