/*
#include <stdio.h>

void main(void)
{
	printf("I love programming\n");
	printf("Yiu will love it too once");
	printf("you know the trick\n");
	getchar();
}
*/
/*
#include <stdio.h>

void main(void)
{
	printf("Line : %d\n", __LINE__);
	printf("%s\n", __FILE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("Line : %d\n\n", __LINE__);
	printf("ANSI : %d\n", __STDC_SECURE_LIB__);
	printf("ANSI : %d\n", __STDC_HOSTED__);
	getchar();
}
*/
/*
#include <stdio.h>
#define pi 3.412

void main(void)
{
	double height, radius, base, volume;

	printf("Enter the height and radius of the cone : ");
	scanf_s("%1f %1f", &height, &radius);

	base = pi * radius * radius;
	volume = (1.0 / 3.0) * base * height;

	printf("\nThe volume of a cone is %f\n", volume);
	system("pause");
}
*/
/*
#include <stdio.h>

void main(void)
{
	printf("I love programming\n");
	printf("Yiu will love it too once");
	printf("you know the trick\n");
	system("pause");
}
*/


/*
#include <stdio.h>

int main(void)
{
	int int1, int2, int_sum;
	float float1, float2, float_sum;
	int1 = 17; int2 = 25; int_sum = int1 + int2;
	float1 = 3.5; float2 = 7.8; float_sum = float1 + float2;

	printf("int1 = %3d, int2 = %3d\n", int1, int2);
	printf("int1 + int2 = %d\n\n", int_sum);
	printf("float1 = %3.2f, float2=%3.2f\n", float1, float2);
	printf("float1 + float2 = %3.2f\n\n", float_sum);

	printf("int1 + float2 = %3.2f\n\n", int1 + float2);
	return 0;
}
*/
/*
#include <stdio.h>

main(void)
{
	//Declarations
	float      x, p;
	double     y, q;
	unsigned   k;

	//Declarations and assignments
	int        m = 54321;
	long int   n = 1234567890;
	
	//Assignments
	x = 1.234567890000;
	y = 9.87654321;
	k = 54321;
	p = q = 1.0;

	//Printing
	printf("m = %d\n", m);
	printf("n = %1d\n", n);
	printf("x = %.12lf\n", x);
	printf("x = %f\n", x);
	printf("y = %.12lf\n", y);
	printf("y = %1f\n", y);
	printf("k = %u p = %f q= %.12lf\n", k, p, q);
}
*/