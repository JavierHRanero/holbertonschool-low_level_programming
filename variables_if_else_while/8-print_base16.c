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
char numero;
for (numero = '0'; numero <= 'f'; numero++)
{
if ((numero >= '0' && numero <= '9') || (numero >= 'a' && numero <= 'f'))
{
putchar(numero);
}
}
putchar('\n');
return (0);
}
