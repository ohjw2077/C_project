/*
//Practice 1
#include <stdio.h>
#include <math.h>

main()
{
	float x1, x2, x3, y1, y2, y3;
	float d1, d2, d3;

	printf("Enter coordinates x1 and y1 for P1: \n");
	scanf_s("%f %f", &x1, &y1);

	printf("Enter coordinates x2 and y2 for P2: \n");
	scanf_s("%f %f", &x2, &y2);

	printf("Enter coordinates x3 and y3 for P3: \n");
	scanf_s("%f %f", &x3, &y3);

	d1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	d2 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	d3 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

	printf("\n");

	if (d1 > d2)
	{
		if (d2 > d3)
			printf("P1 and P3 are the closest points\n");
		else if (d3 > d2)
			printf("P2 and P3 are the closest points\n");
		else
			printf("Distance between P2,P3 and P1,P3 are Same but Closest!\n");
	}
	else if (d2 > d1)
	{
		if (d3 > d1)
			printf("P1 and P2 are the closest points\n");
		else if (d1 > d3)
			printf("P1 and P3 are the closest points\n");
		else
			printf("Distance between P1,P2 and P1,P3 are Same but Closest!\n");
	}
	else if (d1 == d2)
		printf("Distance between P1,P2 and P2,P3 are Same but Closest!\n");
	else
		printf("All distance of each points are Same!\n");
}
*/
/*
//Practice 2
#include <stdio.h>
#include <math.h>

main()
{
	float a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
	float alpha, beta, ceta, d, x1, x2, y1, y2;

	printf("Enter A, B and C values of First quadratic equation Ax^2 + Bx + C = 0 : \n");
	scanf_s("%f %f %f", &a1, &b1, &c1);

	printf("Enter A, B and C values of Second quadratic equation Ax^2 + Bx + C = 0 : \n");
	scanf_s("%f %f %f", &a2, &b2, &c2);

	alpha = a1 - a2;
	beta = b1 - b2;
	ceta = c1 - c2;

	d = pow(beta, 2) - 4 * alpha * ceta;

	printf("\n");

	if (d > 0)
	{
		x1 = (-beta + sqrt(d)) / (2 * alpha);
		x2 = (-beta - sqrt(d)) / (2 * alpha);

		y1 = a1 * pow(x1, 2) + b1 * x1 + c1;
		y2 = a1 * pow(x2, 2) + b1 * x2 + c1;

		printf("The intersection points of two quadratic equation are (%.21f, %.21f) and (%.21f, %.21f)\n", x1, y1, x2, y2);
	}
	else if (d == 0)
	{
		x1 = -beta / (2 * alpha);
		y1 = a1 * pow(x1, 2) + b1 * x1 + c1;
		printf("The intersection point of two quadratic equation is (%.21f, %.21f)\n", x1, y1);

	}
	else
		printf("The intersection point of two quadratic equation does NOT EXIST\n");

}
*/
/*
//Practice 3

#include <stdio.h>

main()
{
	int rows, i, j, space = 1;

	printf("Input the number of rows : \n");
	scanf_s("%d", &rows);

	space = rows - 1;

	for (j = 1; j <= rows; j++)
	{
		for (i = 1; i <= space; i++)
			printf(" ");
		space--;

		for (i = 1; i <= 2 * j - 1; i++)
			printf("*");
		printf("\n");
	}

	for (j = rows - 1; j >= 1; j--)
	{
		space++;
		for (i = space + 1 ; i >= 1; i--)
			printf(" ");
		
		for (i = 2 * j - 1; i >= 1; i--)
			printf("*");
		printf("\n");
	}
}
*/