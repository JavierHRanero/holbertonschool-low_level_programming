#include <stdio.h>
/**
*main - Entry point of the program
*
*Description: This progra assigns a random number to the variable n
*and prints whether the number is positive, negative, or zero.
*
*Return: 0 on success
*/
int main(void)
{
char letra = 'z';
while (letra >= 'a')
{
putchar(letra);
letra--;
}
putchar('\n');
return (0);
}
