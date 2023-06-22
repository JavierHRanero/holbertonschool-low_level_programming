#include <stdlib.h>
#include <time.h>
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
int n;
int ultimoDigito;
srand(time(0));
n = rand() - RAND_MAX / 2;
ultimoDigito = n % 10;
printf("Last digit of %d", n); 
if (ultimoDigito > 5) {   
printf("and is greater than 5\n");   
} else if (ultimoDigito == 0) {   
printf("and is 0\n");
} else {
printf("is less than 6 and not 0\n"); 
}
return (0); 
}
