#include <stdio.h>
#include <ctype.h>

#pragma warning(disable:4996)

/*
main()
{
	char answer;
	printf("Would you like to know you name?\n");

	printf("Type Y for Yes and N for No : ");
	answer = getchar();
	if (answer == 'Y' || answer == 'y')
	{
		printf("\n\nMy name is BUSY BEE\n");
	}
	else
	{
		printf("\n\nYou are good for nothing\n");
	}
}
*/
/*
main()
{
	char character;

	printf("Press any key\n\n");
	character = getchar();

	if (isalpha(character) > 0)
	{
		printf("The character is a letter.");
	}
	else
	{
		if (isdigit(character) > 0)
			printf("The charcter is a digit.");
		else
			printf("The character is not alphanumeric");
	}
}
*/
/*
main()
{
	char alphabet;
	printf("Enter an alphabet");
	putchar('\n');
	alphabet = getchar();
	if (islower(alphabet))
		putchar(toupper(alphabet));
	else
		putchar(tolower(alphabet));
}
*/
/*
main()
{
	int a, b, c, x, y, z;
	int p, q, r;

	printf("Enter three integer numbers\n");
	scanf_s("%d %*d %d", &a, &b, &c);
	printf("%d %d %d\n\n", a, b, c);

	printf("Enter two 4-digit numbers\n");
	scanf_s("%2d %4d", &x, &y);
	printf("%d %d\n\n", x, y);

	printf("Enter two integers\n");
	scanf_s("%d %d", &a, &x);
	printf("%d %d\n\n", a, x);

	printf("Enter a 9-digit number\n");
	scanf_s("%3d %4d %3d", &p, &q, &r);
	printf("%d %d %d\n\n", p, q, r);

	printf("Enter two 3-digit numbers\n");
	scanf_s("%d %d", &x, &y);
	printf("%d %d\n\n", x, y);
}
*/
/*
main()
{
	float x, y;
	double p, q;

	printf("Values of x and y : ");
	scanf_s("%f %e", &x, &y);
	printf("\n");
	printf("x = %f\ny = %f\n\n", x, y);

	printf("Values of p and q : ");
	scanf_s("%lf %lf", &p, &q);
	printf("\n\np = %.12lf\np = %.12e", p, q);
}
*/
/*
main()
{
	int no;
	char name1[15], name2[15], name3[15];

	printf("Enter serial number and name one\n");
	scanf("%d %15c", &no, name1);
	printf("%d %15c\n\n", no, name1);

	printf("Enter serial number and name two\n");
	scanf("%d %s", &no, name2);
	printf("%d %15s\n\n", no, name2);

	printf("Enter serial number and name three\n");
	scanf("%d %15s", &no, name3);
	printf("%d %15s\n\n", no, name3);
}
*/
/*
main()
{
	char address[80];

	printf("Enter address\n");
	scanf("%[a-z]", address);
	printf("%-80s\n\n", address);
}
*/
/*
main()
{
	char address[80];

	printf("Enter address\n");
	scanf("%[^\n]", address);
	printf("%-80s", address);
}
*/
/*
main()
{
	int a;
	float b;
	char c;

	printf("Enter values of a, b and c\n");

	if (scanf("%d %f %c", &a, &b, &c) == 3)
		printf("a = %d b = %f c = %c\n", a, b, c);
	else
		printf("Error in input.\n");
}
*/
/*
main()
{
	int m = 12345;
	long n = 987654;

	printf("%d\n", m);
	printf("%10d\n", m);
	printf("%010d\n", m);
	printf("%-10d\n", m);
	printf("%10ld\n", n);
	printf("%10ld\n", -n);
}
*/
/*
main()
{
	float y = 98.7654;

	printf("%7.4f\n", y);
	printf("%f\n", y);
	printf("%7.2f\n", y);
	printf("%-7.2f\n", y);
	printf("%07.2f\n", y);
	printf("%*.*f", 7, 2, y);
	printf("\n");
	printf("%10.2e\n", y);
	printf("%12.4e\n", -y);
	printf("%-10.2e\n", y);
	printf("%e\n", y);
}
*/
/*
main()
{
	char x = 'A';
	char name[20] = "ANIL KUMAR GUPTA";

	printf("OUTPUT OF CHARACTERS\n\n");
	printf("%c\n%3c\n%5c\n", x, x, x);
	printf("%3c\n%c\n", x, x);
	printf("\n");

	printf("OUTPUT OF STRINGS\n\n");
	printf("%s\n", name);
	printf("%20s\n", name);
	printf("%20.10s\n", name); 
	printf("%.5s\n", name);
	printf("%-20.10s\n", name);
	printf("%5s\n", name);
}
*/
/*
main()
{
	char c;
	printf("\n\n");
	for (c = 65; c <= 122; c = c + 1)
	{
		if (c > 90 && c < 97)
			continue;
		printf("|%4d - %c ", c, c);
	}
	printf("|\n");
}
*/
/*
main()
{
	char word1[40], word2[40], word3[40], word4[40];

	printf("Enter text : \n");
	scanf("%s %s", word1, word2);
	scanf("%s", word3);
	scanf("%s", word4);

	printf("\n");
	printf("word1 = %s\nword2 = %s\n", word1, word2);
	printf("word3 = %s\nword4 = %s\n", word3, word4);
}
*/
/*
main()
{
	char line[81], character;
	int c;
	c = 0;
	printf("Enter text. Press <Return> at end\n");
	do
	{
		character = getchar();
		line[c] = character;
		c++;
	} while (character != '\n');

	c = c - 1;
	line[c] = '\0';
	printf("\n%s\n", line);
}
*/
/*
main()
{
	char string1[80], string2[80];
	int i;

	printf("Enter a string \n");
	printf("?");
	scanf("%s", string2);

	for (i = 0; string2[i] != '\0'; i++)
		string1[i] = string2[i];
	string1[i] = '\0';

	printf("\n");
	printf("%s\n", string1);
	printf("Number of characters = %d\n", i);
}
*/
/*/
main()
{
	char country[15] = "United Kingdom";
	printf("\n\n");
	printf("*123456789012345*\n");
	printf("----- \n");
	printf("%15s\n", country);
	printf("%5s\n", country);
	printf("%15.6s\n", country);
	printf("%-15.6s\n", country);
	printf("%15.0s\n", country);
	printf("%.3s\n", country);
	printf("%s\n", country);
	printf("----- \n");
}
*/
/*
main()
{
	int c, d;
	char string[] = "CProgramming";
	printf("\n\n");
	printf("------------\n");
	for (c = 0; c <= 11; c++)
	{
		d = c + 1;
		printf("|%-12.*s|\n", d, string);
	}
	printf("------------\n");
	for (c = 11; c >= 0; c--)
	{
		d = c + 1;
		printf("|%-12.*s|\n", d, string);
	}
	printf("------------\n");
}
*/
/*
main()
{
	char s1[20], s2[20], s3[20];
	int x, l1, l2, l3;

	printf("\n\nEnter two string constants \n");
	printf("?  ");
	scanf("%s %s", s1, s2);

	x = strcmp(s1, s2);
	if (x != 0)
	{
		printf("\n\nStrings are not equal \n");
		strcat(s1, s2);
	}
	else
		printf("\n\nStrings are equal \n");
	strcpy(s3, s1);
	l1 = strlen(s1);
	l2 = strlen(s2);
	l3 = strlen(s3);

	printf("\n");
	printf("s1 = %s\t length = %d characters\n", s1, l1);
	printf("s2 = %s\t length = %d characters\n", s2, l2);
	printf("s3 = %s\t length = %d characters\n", s3, l3);
}
*/