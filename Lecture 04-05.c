#include <stdio.h>

/*
void printline (void);
void value(void);

main()
{
	printline();
	value();
	printline();
}

void printline(void)
{
	int i;
	for (i = 1; i <= 35; i++)
		printf("%c", '-');
	printf("\n");
}

void value(void)
{
	int year, period;
	float inrate, sum, principal;

	printf("Principal amount?");
	scanf_s("%f", &principal);
	printf("Interest rate?	");
	scanf_s("%f", &inrate);
	printf("period?			");
	scanf_s("%f", &period);

	sum = principal;
	year = 1;
	while (year <= period)
	{
		sum = sum * (1 + inrate);
		year = year + 1;
	}
	printf("\n%8.2f %5.2f %5d %12.2f\n", principal, inrate, period, sum);
}
*/
/*
void printline(char c);
void value(float, float, int);

main()
{
	float principal, inrate;
	int period;

	printf("Enter principal amount, interest");
	printf(" rate, and period \n");
	scanf_s("%f %f %d", &principal, &inrate, &period);
	printline('Z');
	value(principal, inrate, period);
	printline('C');
}

void printline(char ch)
{
	int i;
	for (i = 1; i <= 52; i++)
		printf("%c", ch);
	printf("\n");
}

void value(float p, float r, int n)
{
	int year;
	float sum;
	sum = p;
	year = 1;
	while (year <= n)
	{
		sum = sum * (1 + r);
		year = year + 1;
	}
	printf("%f\t%f\t%d\t%f\n", p, r, n, sum);
}
*/
/*
void printline(char ch, int len);
value(float, float, int);

main()
{
	float principal, inrate, amount;
	int period;
	
	printf("Enter principal amount, interest");
	printf(" rate, and period \n");
	scanf_s("%f %f %d", &principal, &inrate, &period);
	printline('*', 52);
	amount = value(principal, inrate, period);
	printf("\n%f\t%f\t%d\t%f\n\n", principal, inrate, period, amount);
	printline('=', 52);
}

void printline(char ch, int len)
{
	int i;
	for (i = 1; i <= len; i++) printf("%c", ch);
	printf("\n");
}

value(float p, float r, int n)
{
	int year;
	float sum;
	sum = p; year = 1;
	while (year <= n)
	{
		sum = sum * (1+ r);
		year = year + 1;
	}
	return(sum);
}
*/
 /*
main()
{
	int x, y;
	double power(int, int);
	printf("Enter x, y:");
	scanf_s("%d %d", &x, &y);
	printf("%d to power %d is %f\n", x, y, power(x, y));
}

double power (int x, int y)
{
	double p;
	p = 1.0;

	if (y >= 0)
		while (y--)
			p *= x;
	else
		while (y++)
			p /= x;
	return(p);
}
*/
/*
void mathoperation(int x, int y, int* s, int* d);

main()
{
	int x = 20, y = 10, s, d;
	mathoperation(x, y, &s, &d);

	printf("s=%d\nd=%d\n", s, d);
}

void mathoperation(int a, int b, int* sum, int* diff)
{
	*sum = a + b;
	*diff = a - b;
}
*/
/*
float ratio(int x, int y, int z);
int difference(int x, int y);

main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%f \n", ratio(a, b, c));
}

float ratio(int x, int y, int z)
{
	if (difference(y, z))
		return(x / (y - z));
	else
		return(0.0);
}

int difference(int p, int q)
{
	if (p != q)
		return (1);
	else
		return(0);
}
*/
/*
void function1(void);
void function2(void);

main()
{
	int m = 1000;
	function2();

	printf("%d\n", m);
}

void function1(void)
{
	int m = 10;
	printf("%d\n", m);
}

void function2(void)
{
	int m = 100;

	function1();
	printf("%d\n", m);
}
*/
/*
int fun1(void);
int fun2(void);
int fun3(void);
int x;

main()
{
	x = 10;
	printf("x=%d\n", x);
	printf("x=%d\n", fun1());
	printf("x=%d\n", fun2());
	printf("x=%d\n", fun3());
}

fun1()
{
	x = x + 10;
}

int fun2()
{
	int x;
	x = 1;
	return (x);
}

fun3()
{
	x = x + 10;
}
*/
/*
void stat();

main()
{
	int i;
	for (i = 1; i <= 3; i++)
		stat();
}

void stat()
{
	static int x = 0;
	x = x + 1;
	printf("x = %d\n", x);
}
*/