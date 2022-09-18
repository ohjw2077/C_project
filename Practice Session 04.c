#include <stdio.h>

/*
//Practice 1
main()
{
	int rows, i, j, k, space = 1;

	printf("Enter the number : ");
	scanf_s("%d", &rows);

	space = rows - 1;

	for (j = 1; j <= rows; j++)
	{
		k = 65;

		for (i = 1; i <= space; i++)
		{
			printf("  ");
		}
		space--;

		for (i = 1; i <= j; i++)
		{
			printf("%c ", k);
			k++;
		}

		for (i = 1; i <= j - 1; i++)
		{
			printf("%c ", k - 2);
			k--;
		}
		printf("\n");
	}
}
*/

/*
//Practice 2

void printN(int n);

main()
{
	int k = 50;
	printN(k);
}

void printN(int n)
{
	if (n == 1)
		printf("50");
	else
	{
		printf("%d, ", 51 - n);
		printN(n - 1);
	}
}
*/
/*
//Practice 3

int Fibonacci(int n);
int Factorial(int n);

main()
{
	int n;

	printf("Enter a single integer : ");
	scanf_s("%d", &n);
	
	printf("\n");
	printf("n'th term of Fibonacci Sequence : %d\n", Fibonacci(n));
	printf("Factorial of n : %d\n", Factorial(n));
}

int Fibonacci(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int Factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
}
*/