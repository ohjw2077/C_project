/*
//Practice 1
#include <stdio.h>
#define PI 3.1415926535897932387673

main()
{
	float R, Area;
	printf("Enter th radius : ");
	scanf_s("%f", &R);

	Area = R * R * PI;

	printf("The area of a circle is %lf", Area);
}
*/
/*
//Practice 2
#include <stdio.h>
#include <math.h>

main()
{
	float x, y;
	float rad, ceta;

	printf("Enter the Radius : ");
	scanf_s("%f", &rad);
	printf("Enter the Angle : ");
	scanf_s("%f", &ceta);

	x = rad * cos(ceta);
	y = rad * sin(ceta);

	printf("( %f, %f )", x, y);
}
*/
/*
//Practice 3
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