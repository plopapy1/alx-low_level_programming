#include <stdio.h>
/**
  * main - entry point
  * return: 0
  *
  */
int main(void)
{
	int i;
	char a[] = "Fizz"
	char b[] = "Buzz"
	char ab[] = "FizzBuzz"

	for (i = 1; 1 <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			 printf("%s", ab);
		else if (i % 3 == 0)
			printf("%s", a);
		else if (i % 5 == 0)
			 printf("%s", b);
		else
			printf("%s", i);
	}
	printf("\n");
	return (0);
}
