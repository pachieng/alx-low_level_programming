#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/

printf("%d\n", argc - 1);

return (0);
}
