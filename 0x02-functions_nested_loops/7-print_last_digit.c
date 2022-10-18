#include "main.h"
/**
*print_last_digit - prints last 7 digits of a number
*@j: integer receipt by main.
*Return: Returns i ,
*/
int print_last_digit(int j)
{
int i;
i = j % 10;
if (i < 0)
{
i *= -1;
}
_putchar(i + '0');
return (i);
}
