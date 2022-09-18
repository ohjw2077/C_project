#pragma warning(diable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.1415926
#define STUDENTS 5
#define SUBJECTS 4

/*
void exchange(int*, int*);

main()
{
	int x, y;
	x = 100;
	y = 200;

	printf("Before exchange :x = %d    y = %d\n\n", x, y);
	exchange(&x, &y);
	printf("After exchange : x = %d    y = %d\n\n", x, y);
}

void exchange(int* a, int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
*/
/*
int* larger(int*, int*);

main()
{
	int a = 10;
	int b = 20;
	int* p;
	p = larger(&a, &b);
	printf("%d", *p);
}

int* larger(int* x, int* y)
{
	if (*x > * y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
*/
/*
double y(double);
double table(double(*f)(), double, double, double);

main()
{
	printf("Table of y(x) = 2*x*x-x+1\n\n");
	table(y, 0.0, 2.0, 0.5);
	printf("\nTable of Cos(x)\n\n");
	table(cos, 0.0, PI, 0.5);
}

double table(double(*f)(), double min, double max, double step)
{
	double a, value;
	for (a = min; a <= max; a += step)
	{
		value = (*f)(a);
		printf("%5.2f   %10.4f\n", a, value);
	}
}

double y(double x)
{
	return (2 * x * x - x + 1);
}
*/
/*
struct invent
{
	char* name[20];
	int number;
	float price;
};

main()
{
	struct invent product[3], * ptr;
	printf("INPUT\n\n");
	for (ptr = product; ptr < product + 3; ptr++)
	{
		scanf("%s %d %f", ptr->name, &ptr->number, &ptr->price);
	}
	printf("\nOUTPUT\n\n");
	ptr = product;
	while (ptr < product + 3)
	{
		printf("%-20s %5d %10.2f\n", ptr->name, ptr->number, ptr->price);
		ptr++;
	}
}
*/
/*
get_list(char* string[], int array[][SUBJECTS + 1], int m, int n);
get_sum(int array[][SUBJECTS + 1], int m, int n);
get_rank_list(char* string[], int array[][SUBJECTS + 1], int m, int n);
print_list(char* string[], int array[][SUBJECTS + 1], int m, int n);
swap_int(int* p, int* q);
swap_string(char s1[], char s2[]);

main()
{
	char name[STUDENTS][20];
	int marks[STUDENTS][SUBJECTS + 1];

	printf("Input students names & their marks in four subjects\n");
	get_list(name, marks, STUDENTS, SUBJECTS);
	get_sum(marks, STUDENTS, SUBJECTS + 1);
	printf("\n");
	print_list(name, marks, STUDENTS, SUBJECTS + 1);
	get_rank_list(name, marks, STUDENTS, SUBJECTS + 1);
	printf("\nRanked List\n\n");
	print_list(name, marks, STUDENTS, SUBJECTS + 1);
}

get_list(char* string[], int array[][SUBJECTS + 1], int m, int n)
{
	int i, j, (*rowptr)[SUBJECTS + 1] = array;
	for (i = 0; i < m; i++)
	{
		scanf("%s", string[i]);
		for (j = 0; j < SUBJECTS; j++)
		{
			scanf("%d", &(*(rowptr + i))[j]);
		}
	}
}

get_sum(int array[][SUBJECTS + 1], int m, int n)
{
	int i, j, (*rowptr)[SUBJECTS + 1] = array;
	for (i = 0; i < m; i++)
	{
		(*(rowptr + i))[n - 1] = 0;
		for (j = 0; j < n - 1; j++)
		{
			(*(rowptr + i))[n - 1] += (*(rowptr + i))[j];
		}
	}
}

get_rank_list(char* string[], int array[][SUBJECTS + 1], int m, int n)
{
	int i, j, k, (*rowptr)[SUBJECTS + 1] = array;
	char* temp;

	for (i = 1; i <= m - 1; i++)
	{
		for (j = 1; j <= m - i; j++)
		{
			if ((*(rowptr + j - 1))[n - 1] < (*(rowptr + j))[n - 1])
			{
				swap_string(string[j - 1], string[j]);

				for (k = 0; k < n; k++)
				{
					swap_int(&(*(rowptr + j - 1))[k], &(*(rowptr + j))[k]);
				}
			}
		}
	}
}

print_list(char* string[], int array[][SUBJECTS + 1], int m, int n)
{
	int i, j, (*rowptr)[SUBJECTS + 1] = array;

	for (i = 0; i < m; i++)
	{
		printf("%-20s", string[i]);
		for (j = 0; j < n; j++)
		{
			printf("%5d", (*(rowptr + i))[j]);
			printf("\n");
		}
	}
}

swap_int(int* p, int* q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}

swap_string(char s1[], char s2[])
{
	char swaparea[256];
	int i;

	for (i = 0; i < 256; i++)
	{
		swaparea[i] = '\0';
	}
	i = 0;

	while (s1[i] != '\0' && i < 256)
	{
		swaparea[i] = s1[i];
		i++;
	}
	i = 0;

	while (s2[i] != '\0' && i < 256)
	{
		s1[i] = s2[i];
		s1[++i] = '\0';
	}
	i = 0;

	while (swaparea[i] != '\0')
	{
		s2[i] = swaparea[i];
		s2[++i] = '\0';
	}
}
*/
/*
void update(struct stores* product, float p, int q);
float mul(struct stores* stock);

struct stores
{
	char name[20];
	float price;
	int quantity;
};

main()
{
	void update(struct stores*, float, int);
	float p_increment, value;
	int q_increment;

	struct stores item = { "XYZ", 25.75, 12 };
	struct stores* ptr = &item;

	printf("\nInput increment values : ");
	printf(" price increment and quantity increment\n");
	scanf("%f %d", &p_increment, &q_increment);

	update(&item, p_increment, q_increment);

	printf("Updated values of item\n\n");
	printf("Name       : %s\n", ptr->name);
	printf("Price      : %f\n", ptr->price);
	printf("Quantity   : %d\n", ptr->quantity);

	value = mul(&item);

	printf("\nValue of the item = %f\n", value);
}

void update(struct stores* product, float p, int q)
{
	product->price += p;
	product->quantity += q;
}

float mul(struct stores* stock)
{
	return (stock->price * stock->quantity);
}
*/
/*
// extra Assignment

double* Quadratic(double*, double*, double*);

main()
{
	double a, b, c, r1, r2, r3, r4;
	double* p = 0;

	printf("Input a, b, and c of ax^2 + bx + c = 0 \n");
	scanf("%lf %lf %lf", &a, &b, &c);

	p = Quadratic(&a, &b, &c);

	r1 = *(p);
	r2 = *(p + 1); 
	r3 = *(p + 2);
	r4 = *(p + 3);

	if ((pow(b, 2) - 4 * a * c) > 0)
	{
		printf("x1 = %f + (%f)\n", r1, r2);
		printf("x2 = %f + (%f)\n", r3, r4);
	}
	else if ((pow(b, 2) - 4 * a * c) == 0)
	{
		printf("x1 = x2 = %f + (%f)\n", r1, r2);
	}
	else
	{
		printf("x1 =  %f + (%f)i\n", r1, r2);
		printf("x2 =  %f + (%f)i\n", r3, r4);
	}

	system("pause");
}

double* Quadratic(double* a, double* b, double* c)
{
	double x[5] = { 0,0,0,0,0 };

	if (pow(*b, 2) - 4 * (*a) * (*c) > 0)
	{
		x[0] = -(*b / 2 * (*a));
		x[1] = sqrt(pow(*b, 2) - 4 * (*a) * (*c)) / 2 * (*a);
		x[2] = -(*b / 2 * (*a));
		x[3] = -sqrt(pow(*b, 2) - 4 * (*a) * (*c)) / 2 * (*a);
	}
	else if (pow(*b, 2) - 4 * (*a) * (*c) == 0)
	{
		x[0] = -(*b / 2 * (*a));
		x[1] = sqrt(pow(*b, 2) - 4 * (*a) * (*c)) / 2 * (*a);
		x[2] = x[0];
		x[3] = x[1];
	}
	else
	{
		x[0] = -*b / 2 * (*a);
		x[1] = sqrt(-(pow(*b, 2) - 4 * (*a) * (*c))) / 2 * (*a);
		x[2] = -*b / 2 * (*a);
		x[3] = -sqrt(-(pow(*b, 2) - 4 * (*a) * (*c))) / 2 * (*a);
	}

	return(&x);
}
*/
