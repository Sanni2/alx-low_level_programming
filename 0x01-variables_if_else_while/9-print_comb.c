#include <stdio.h>
/**
 *main - prints all possible combinations of single-digit numbers
 *
 *Description: using the main function
 *Return: Always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)

	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	Rreturn(0);
}
