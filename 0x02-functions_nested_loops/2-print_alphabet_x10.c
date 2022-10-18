#include "main.h"

/**
* Prints alphabet ten times in lowercase - print alphabet
*
* Return:0 always.
*/
void print_alphabet_x10(void)
{
int alphabet;
int count;


count = 0;
while (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
count++;
_putchar('\n');
}

}
