/**
 * f_int - function to handle integers
 * @list: list type
 * Return: int
 */
#include "holberton.h"
#include <stdlib.h>
int f_int(va_list list)
{
	unsigned int num_p;
	int i;
	int number;
	int contador = 0;
	int tam = 0;
	unsigned int copia;
	char *caracter;

	number = va_arg(list, int);
	copia = number;
	if (number < 0)
	{
		_putchar('-');
		tam = 1;
		num_p = number * -1, copia = copia * -1;
	}
	else
	{
		tam = 0;
		num_p = number;
	}
	while (num_p / 10 > 0)
	{
		num_p = num_p / 10;
		contador++;
	}
	caracter = malloc(sizeof(char) * contador);
	for (i = contador; i >= 0; i--)
	{
		caracter[i] = copia % 10;
		copia = copia / 10;
	}
	for (i = 0; i <= contador; i++)
	{
		_putchar(caracter[i] + '0');
	}
	contador = contador + tam;
	contador++;
	free(caracter);
	return (contador);
}
/**
 * f_int_unsigned - function to handle unsigned integers
 * @list: list type
 * Return: int
 */
#include "holberton.h"
#include <stdlib.h>
int f_int_unsigned(va_list list)
{
	unsigned int num_p;
	int i;
	int number;
	int contador = 0;
	unsigned int copia;
	char *caracter;

	number = va_arg(list, int);
	copia = number;
	num_p = number;
	while (num_p / 10 > 0)
	{
		num_p = num_p / 10;
		contador++;
	}
	caracter = malloc(sizeof(char) * contador);
	for (i = contador; i >= 0; i--)
	{
		caracter[i] = copia % 10;
		copia = copia / 10;
	}
	for (i = 0; i <= contador; i++)
	{
		_putchar(caracter[i] + '0');
	}
	contador = contador;
	contador++;
	free(caracter);
	return (contador);
}
