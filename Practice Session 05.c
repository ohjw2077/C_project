#include <stdio.h>

/*
//Practice 1
#define maxsize 100
int check(int n);

main()
{
	int original_array[maxsize],
		prime_array[maxsize], composite_array[maxsize];

	int i = 0, j = 0, k = 0, n = 0, m = 0, size = 0;

	printf("Array Size : ");
	scanf_s("%d", &size);

	printf("Elements : ");

	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &original_array[i]);
	}
	
	for (i = 0; i < size; i++)
	{
		if (check(original_array[i]) == 1) // Prime
		{
			prime_array[j] = original_array[i];
			j++;
		}
		else  // Composition
		{
			composite_array[k] = original_array[i];
			k++;
		}
	}

	printf("Prime array : ");
	for (n = 0; n < j; n++)
		printf("%d ", prime_array[n]);

	printf("\nComposite array : ");
	for (m = 0; m < k; m++)
		printf("%d ", composite_array[m]);
	
}

int check(int n)
{
	int i, flag = 0;
	for (i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		return 1; // When n is Prime number
	else
		return 2; // When n is Composition number
}
*/
/*
//Practice 2
#define maxrow 10
#define maxcolumn 10
main()
{
	int first[maxrow][maxcolumn], second[maxrow][maxcolumn], result[maxrow][maxcolumn];
	int a, b, i, j;

	printf("Enter the elemnets of first  3 x 3 array :  ");

	for (a = 0; a < 3; a++)
		for (b = 0; b < 3; b++)
			scanf_s("%d", &first[a][b]);

	printf("Enter the elemnets of second 3 x 3 array :  ");

	for (a = 0; a < 3; a++)
		for (b = 0; b < 3; b++)
			scanf_s("%d", &second[a][b]);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			result[i][j] = first[i][0] * second[0][j] + first[i][1] * second[1][j] + first[i][2] * second[2][j];
		}
	}

	printf("\nResult of multiplication : \n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}
*/
/*
//Practice 3
#define maxrow 10
#define maxcolumn 10

main()
{
	int snake[maxrow][maxcolumn], i, j;

	for (j = 0; j < 10; ++j)
	{
		snake[0][j] = (j + 1);
		printf("%d  ", snake[0][j]);
	}
	printf("\n");

	for (i = 1; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (i % 2 == 0)
			{
				snake[i][j] = 10 * i + (j + 1);
				printf("%d ", snake[i][j]);
			}
			else
			{
				snake[i][j] = 10 * i + (10 - j);
				printf("%d ", snake[i][j]);
			}
		}
		printf("\n");
	}
}
*/