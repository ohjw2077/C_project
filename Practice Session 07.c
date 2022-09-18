#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

/*
//Practice 1
main()
{
	int matrix[100][100] = { 0 };
	int N;

	printf("Input your desired number : ");
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i > j)
			{
				matrix[i][j] = 0;
			}
			else
			{
				matrix[i][j] = N * i + j + 1;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%5d", matrix[i][j]);
		}
		printf("\n");
	}

}
*/
/*
//Practice 2
main()
{
	char PHnum[12];
	int det1 = 0, det2 = 0, det3 = 0, det4 = 0, count = 0;

	printf("Input Your Phone Number : ");
	scanf("%s", PHnum);

	for (int i = 0; i < 11; i++)
	{
		if ((PHnum[i] == PHnum[i + 1]) && (PHnum[i] == PHnum[i + 2]))
		{
			det1 = 1;
		}
		else if (((PHnum[i] + 1) == PHnum[i + 1]) && ((PHnum[i] + 2) == PHnum[i + 2]))
		{
			det2 = 1;
		}
		else if (((PHnum[i] - 1) == PHnum[i + 1]) && ((PHnum[i] - 2) == PHnum[i + 2]))
		{
			det3 = 1;
		}
		else
		{
			for (int k = i; k < 11 - i; k++)
			{
				if (PHnum[i] == PHnum[k])
				{
					count += 1;
				}
			}
			if (count >= 4)
			{
				det4 = 1;
			}
		}
		count = 0;
	}

	if (det1 == 1 || det2 == 1 || det3 == 1 || det4 == 1)
	{
		printf("Your Phone Number is Cute\n\n");
	}
	else
	{
		printf("Your Phone Number is Special\n\n");
	}
	system("pause");
}
*/
/*
//Practice 3
void swap(int, int);
void permutation(int, int);

char text[100];

main()
{
	int length;
	printf("Input string to print all permutations : ");
	scanf("%s", text);

	length = strlen(text);

	permutation(0, length);
}

void swap(int x, int y)
{
	char temp;
	temp = text[x];
	text[x] = text[y];
	text[y] = temp;
}

void permutation(int init, int length)
{
	if (init == length)
	{
		printf("%s\n", text);
	}
	else
	{
		for (int i = init; i < length; i++)
		{
			swap(i, init);
			permutation(init + 1, length);
			swap(i, init);
		}	
	}
}
*/
/*
//Practice 4
#define max 100

main()
{
	char text[max];
	char word[max][max] = { '\0' };
	int space[max] = { 0 }, count[max] = { 0 };
	int D, length, n = 1, check = 0;

	printf("Input your desierd text : ");
	gets(text);

	for (int i = 0; i < max; i++)
	{
		text[i] = toupper(text[i]);
		if (text[i] == '\ ')
		{
			space[n] = i;
			n++;
		}
		else if (text[i] == '\0')
		{
			length = i;
			space[n] = length;
		}
	}

	for (int i = 0; i < length; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j <= space[i + 1] - space[i] - 1; j++)
			{
				check = isalpha(text[j + space[i]]);
				if (check != 0)
				{
					word[i][j] = text[j + space[i]];
				}
			}
		}
		else
		{
			for (int j = 0; j < space[i + 1] - space[i] - 1; j++)
			{
				check = isalpha(text[j + space[i] + 1]);
				if (check != 0)
				{
					word[i][j] = text[j + space[i] + 1];
				}	
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			D = strcmp(&word[i], &word[j]);
			if (D == 0)
			{
				word[j][0] = '\0';
				count[i] += 1;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		if (*word[i] != '\0')
		{
			printf("%s is used for %d times.\n", word[i], count[i] + 1);
		}
	}

	system("pause");
}
*/