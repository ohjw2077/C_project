#include <stdio.h>

/*
//Practice 1

int main()
{
	int n, m, result, x;

Multiplication:
	printf("Enter the number for multiplication table : ");
	scanf_s("%d", &n);

	for (m = 1; m <= 10; m++)
	{
		result = n * m;
		printf("%d*%d=%d\n", n, m, result);

	}

	printf("If you want to continue with New number, Press 1 \n");
	scanf_s("%d", &x);

	if (x == 1)
		goto Multiplication;
	else
		goto Stop;
Stop:
	return 0;

	system("pause");
}
*/
/*
//Practice 2
main()
{
	int num, i, j, flag = 0;
	printf("Enter a single positive integer : ");
	scanf_s("%d", &num);

if (num == 1)
{
	printf("1 is neither a prime nor a composition number.");
}
else
{
	for (i = 2; i <= num; ++i)
	{
		for (j = 2; j < i; ++j)
		{
			if (i%j == 0)
			{
				flag = 1;
				break;
			}
			flag = 0;
		}
		
		if (flag == 0)
			printf("%d  ", i);
	}
}
printf("\n");
}
*/
/*
//Practice 3
main()
{
	int num, result, i;
	printf("Enter a single integer : ");
	scanf_s("%d", &num);

	result = num * num;

	for (i = 1; i <= result; i++)
	{
		printf("%d  ", i);
	}
}
*/
/*
//Practice 4
main()
{
	int rows, i, j, space, count = 0;

	printf("Input the number of rows desired\n");
	scanf_s("%d", &rows);

	space = rows - 1;

	for (j = 1; j <= rows; j++)
	{
		for (i = 1; i <= space; i++)
			printf(" ");
		space--;

		for (i = 1; i <= 2 * j - 1; i++)
		{
			printf("*");
			count += 1;
		}
			
		printf("\n");
	}

	printf("\n  %d  stars were used to make the full shape\n", count);
}
*/
/*
//Practice 5

main()
{
	int num, a1, a2, b1, b2, X = 0, Y = 0, Z = 0;

	printf("Type a number of 15 digits: \n\n");

	printf("Type Front 8digits of 1st number: ");
	scanf_s("%d", &a1);
	printf("Type Back 7digits of 1st number: ");
	scanf_s("%d", &a2);

	printf("\nType Front 8digits of 2nd number: ");
	scanf_s("%d", &b1);
	printf("Type Back 7digits of 2nd number: ");
	scanf_s("%d", &b2);

	X = a1 + b1;
	Y = a2 + b2;
	Z = Y / 10000000;

	if (Z >= 1)
	{
		X = X + 1;
		Y = Y - 10000000;
	}

	printf("\nAddition result : %d%d\n", X, Y);
}
*/
/*
//Practice 6
#include <math.h>
#include <Windows.h>

main()
{
	int min, sec, totalTime, m, s;

	printf("Time Count!!\n");

	printf("Minute : ");
	scanf_s("%d", &min);

	printf("Second : ");
	scanf_s("%d", &sec);

	totalTime = min * 60 + sec;

	while (totalTime > 0)
	{
		s = totalTime % 60;
		m = (totalTime - s) / 60;

		printf("%d : %d -> ", m, s);
		totalTime--;
		Sleep(1000);
	}
}
*/
/*
//Practice 7

main()
{
	int n, i, j, a1=1, a2=1, Fib, Fac=1;

	printf("Enter a single integer : ");
	scanf_s("%d", &n);

	printf("\nFibonacci Sequence : ");
	for (i = 1; i <= n; i++)
	{
		printf("%d  ", a1);
		Fib = a1 + a2;
		a1 = a2;
		a2 = Fib;
	}
	
	printf("\nFactorial of n : ");
	for (j = 1; j <= n; j++)
	{
		Fac = Fac * j;
	}
	printf("%d\n", Fac);
}
*/
