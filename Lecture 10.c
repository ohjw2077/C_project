#include <stdio.h>

/*
main()
{
	char a;
	int x;
	float p, q;

	a = 'A';
	x = 125;
	p = 10.25, q = 18.76;

	printf("%c is stored at addr %u.\n", a, &a);
	printf("%d is stored at addr %u.\n", x, &x);
	printf("%f is stored at addr %u.\n", p, &p);
	printf("%f is stored at addr %u.\n", q, &q);
}
*/
/*
main()
{
	int x, y;
	int* ptr;

	x = 10;
	ptr = &x;
	y = *ptr;

	printf("Value of x is %d\n\n", x);
	printf("%d is stored at addr %u\n", x, &x);
	printf("%d is stored at addr %u\n", *&x, &x);
	printf("%d is stored at addr %u\n", *ptr, ptr);
	printf("%d is stored at addr %u\n", ptr, &ptr);
	printf("%d is stored at addr %u\n", y, &y);
	*ptr = 25;
	printf("\nNow x = %d\n", x);
}
*/
/*
main()
{
	int a, b, * p1, * p2, x, y, z;
	a = 12;
	b = 4;
	p1 = &a;
	p2 = &b;
	x = *p1 * *p2 - 6;
	y = 4 * -*p2 / *p1 + 10;

	printf("Address of a = %u\n", p1);
	printf("Address of b = %u\n", p2);
	printf("\n");
	printf("a = %d, b = %d\n", a, b);
	printf("x = %d, y = %d\n", x, y);

	*p2 = *p2 + 3;
	*p1 = *p2 - 5;
	z = *p1 * *p2 - 6;
	printf("\na = %d, b = %d.", a, b);
	printf(" z = %d\n", z);

}
*/
/*
main()
{
	int* p, sum = 0, i;
	int x[5] = { 5,9,6,3,7 };
	i = 0;
	p = &x;

	printf("Element	value	Address\n\n");
	while (i < 5)
	{
		printf(" x[%d]	%d	%u\n", i, *p, p);
		sum = sum + *p;
		i++, p++;
	}
	printf("\n Sum = %d\n", sum);
	printf("\n &x[0] = %u\n", &x[0]);
	printf("\n p = %u\n", p);
}
*/