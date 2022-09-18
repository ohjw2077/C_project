#include <stdio.h>

//Question:1
/*
#define KMS_PER_MILE 1.609

int main(void)
{
	double miles, kms;

	printf("Enter the distance in miles > ");
	scanf_s("%lf", &miles);

	kms = KMS_PER_MILE * miles;

	printf("That equals %lf kilometers.\n", kms);

	return(0);

}
*/
/*
void main(void)
{
	char my_char;
	printf("Please type a character : ");
	my_char = getchar();
	printf("\nYou haver typed this character : ");
	putchar(my_char);
}
*/
/*
void main(void)
{
	char my_char;
	printf("Please type a character : ");
	scanf_s("%c", &my_char);
	printf("\nYou have typed this character : %c", my_char);
}
*/
/*
main()
{
	int months, days;

	printf("Enter days\n");
	scanf_s("%d", &days);

	months = days / 30;
	days = days % 30;
	printf("Months = %d Days = %d", months, days);
}
*/
/*
#define N 100
#define A 2

main()
{
	int a;
	a = A;
	while (a < N)
	{
		printf("%d\n", a);
		a *= a;
	}
}
*/
/*
main()
{
	int a, b, c, d;

	a = 15;
	b = 10;
	c = ++a - b;

	printf("a = %d  b = %d  c = %d\n", a, b, c);
	d = b++ + a;

	printf("a = %d  b = %d  d = %d\n", a, b, d);
	printf("a/b = %d\n", a / b);
	printf("a%%b = %d\n", a % b);
	printf("a *= b = %d\n", a *= b);
	printf("%d\n", (c > d) ? 1 : 0);
	printf("%d\n", (c < d) ? 1 : 0);
}
*/
/*
main()
{
	float a, b, c, x, y, z;

	a = 9;
	b = 12;
	c = 3;

	x = a - b / 3 + c * 2 - 1;
	y = a - b / (3 + c) * (2 - 1);
	z = a - (b / (3 + c) * 2) - 1;

	printf("x = %f\n", x);
	printf("y = %f\n", y);
	printf("z = %f\n", z);
}
*/
/*
main()
{
	float sum;
	int n;
	sum = 0;
	for (n = 1; n <= 10; ++n)
	{
		sum = sum + 1 / (float)n;
		printf("%2d %6.4f\n", n, sum);
	}
}
*/
/*
//Question:2

main()
{
	float Fstu1, Fstu2, Fstu3,
		Sstu1, Sstu2, Sstu3,
		Tstu1, Tstu2, Tstu3;
	float ave1, ave2, ave3;

	printf("Enter the student A's scores of 3 different courses : ");
	scanf_s("%f %f %f", &Fstu1, &Fstu2, &Fstu3);

	printf("Enter the student B's scores of 3 different courses : ");
	scanf_s("%f %f %f", &Sstu1, &Sstu2, &Sstu3);

	printf("Enter the student C's scores of 3 different courses : ");
	scanf_s("%f %f %f", &Tstu1, &Tstu2, &Tstu3);

	ave1 = (Fstu1 + Fstu2 + Fstu3) / 3;
	ave2 = (Sstu1 + Sstu2 + Sstu3) / 3;
	ave3 = (Tstu1 + Tstu2 + Tstu3) / 3;

	if (ave1 > ave2)
	{
		if (ave3 > ave1)
		{
			printf("\n\nStudent B's average score is %f and his grade is %c\n", ave2, (ave2 < 50) ? 'F' : 'P');
			printf("Student A's average score is %f and his grade is %c\n", ave1, (ave1 < 50) ? 'F' : 'P');
			printf("Student C's average score is %f and his grade is %c\n", ave3, (ave3 < 50) ? 'F' : 'P');
		}
		else if (ave2 > ave3)
		{
			printf("\n\nStudent C's average score is %f and his grade is %c\n", ave3, (ave3 < 50) ? 'F' : 'P');
			printf("Student B's average score is %f and his grade is %c\n", ave2, (ave2 < 50) ? 'F' : 'P');
			printf("Student A's average score is %f and his grade is %c\n", ave1, (ave1 < 50) ? 'F' : 'P');
		}
		else
		{
			printf("\n\nStudent B's average score is %f and his grade is %c\n", ave2, (ave2 < 50) ? 'F' : 'P');
			printf("Student C's average score is %f and his grade is %c\n", ave3, (ave3 < 50) ? 'F' : 'P');
			printf("Student A's average score is %f and his grade is %c\n", ave1, (ave1 < 50) ? 'F' : 'P');
		}
			
	}
	if (ave2 > ave1)
	{
		if (ave3 > ave2)
		{
			printf("\n\nStudent A's average score is %f and his grade is %c\n", ave1, (ave1 < 50) ? 'F' : 'P');
			printf("Student B's average score is %f and his grade is %c\n", ave2, (ave2 < 50) ? 'F' : 'P');
			printf("Student C's average score is %f and his grade is %c\n", ave3, (ave3 < 50) ? 'F' : 'P');
		}
		else if (ave1 > ave3)
		{
			printf("\n\nStudent C's average score is %f and his grade is %c\n", ave3, (ave3 < 50) ? 'F' : 'P');
			printf("Student A's average score is %f and his grade is %c\n", ave1, (ave1 < 50) ? 'F' : 'P');
			printf("Student B's average score is %f and his grade is %c\n", ave2, (ave2 < 50) ? 'F' : 'P');
		}			
		else
		{
			printf("\n\nStudent A's average score is %f and his grade is %c\n", ave1, (ave1 < 50) ? 'F' : 'P');
			printf("Student C's average score is %f and his grade is %c\n", ave3, (ave3 < 50) ? 'F' : 'P');
			printf("Student B's average score is %f and his grade is %c\n", ave2, (ave2 < 50) ? 'F' : 'P');
		}
	}
}
*/
//Question3
/*
main()
{
	int x, y;

	printf("Enter two numbers X and Y : ");
	scanf_s("%d %d", &x, &y);

	printf("\n\nBitwise AND of X and Y is : %d\n", x & y);
	printf("Bitwise OR of X and Y is : %d\n", x | y);
	printf("Bitwise XOR of X and Y is : %d\n", x ^ y);
	printf("Shift Left Y of x is : %d\n", x << y);
	printf("Shift Right Y of X is : %d\n", x >> y);

}
*/
/*
//Question:4-1
main()
{
	int x;

	printf("Enter the number : ");
	scanf_s("%d", &x);
	if ((x & 2) == 2 && (x & 4) == 0)
		x = x + 2;
	else if ((x & 2) == 0 && (x & 4) == 4)
		x = x - 2;
	else
		x = x;
	printf("Swapped number is %d.\n", x);
}
*/
/*
//Question:4-2
main()
{
	int x;
	printf("Enter a hexadecimal number: ");
	scanf_s("%x", &x);
	if ((x & 2) == 2 && (x & 4) == 0)
		x = x + 2;
	else if ((x & 2) == 0 && (x & 4) == 4)
		x = x - 2;
	else
		x = x;
	printf("Swapped number is %d.\n", x);
}
*/
/*
//Question:5
main()
{
	int x, bit1, bit2, orbit;
	printf("Input 8 bit number : ");
	scanf_s("%d", &x);
	if (x < 256)
	{
		bit1 = (x & 15) << 4;
		bit2 = (x & 240) >> 4;
		orbit = bit1 | bit2;
		printf("Swapped Number is %d\n", orbit);
	}
	else
	{
		printf("Please input 8bit number\n");
	}
}
*/










