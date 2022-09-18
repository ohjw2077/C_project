#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
struct personal
{
	char name[20];
	int day;
	char month[10];
	int year;
	float salary;
};

main()
{
	struct personal person;
	printf("Input Values\n");
	scanf("%s %d %s %d %f",
		person.name,
		&person.day,
		person.month,
		&person.year,
		&person.salary);
	printf("%s %d %s %d %f\n",
		person.name,
		person.day,
		person.month,
		person.year,
		person.salary);
}
*/
/*
struct class
{
	int number;
	char name[20];
	float marks;
};

main()
{
	int x;
	struct class student1 = { 111,"Rao",72.50 };
	struct class student2 = { 222,"Reddy",67.00 };
	struct class student3;

	student3 = student2;

	x = ((student3.number == student2.number) && (student3.marks == student2.marks)) ? 1 : 0;

	if (x == 1)
	{
		printf("\nStudent2 and Student3 are some\n\n");
		printf("%d %s %f\n",
			student3.number,
			student3.name,
			student3.marks);
	}
	else
	{
		printf("\nStudent2 and Student3 ae different\n\n");
	}
}
*/
/*
struct marks
{
	int sub1;
	int sub2;
	int sub3;
	int total;
};

main()
{
	int i;
	struct marks student[3] = { {45,67,81,0},
								{75,53,69,0},
								{57,36,71,0} };
	struct marks total = { {0},{0},{0} };
	for (i = 0; i <= 2; i++)
	{
		student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
		total.sub1 = total.sub1 + student[i].sub1;
		total.sub2 = total.sub2 + student[i].sub2;
		total.sub3 = total.sub3 + student[i].sub3;
		total.total = total.total + student[i].total;
	}
	printf(" STUDENT			TOTAL\n\n");
	for (i = 0; i <= 2; i++)
	{
		printf("\n STUDENT[%d]			%d\n", i+1, student[i].total);
	}
	printf("\n SUBJECT			TOTAL\n\n");
	printf(" %s			%d\n %s			%d\n %s			%d",
		"Subject 1", total.sub1,
		"Subject 2", total.sub2,
		"Subject 3", total.sub3);
	
	printf("\n Grand Total = %d\n", total.total);
}
*/
/*
main()
{
	struct marks
	{
		int sub[3];
		int total;
	};
	struct marks student[3] = { 45,67,81,0,75,53,69,0,57,36,71,0 };

	struct marks total = { 0 };
	int i, j;

	for (i = 0; i <= 2; i++) //student
	{
		for (j = 0; j <= 2; j++) //sub
		{
			student[i].total += student[i].sub[j];
			total.sub[j] += student[i].sub[j];
		}
		total.total += student[i].total;
	}
	printf("STUDENT			TOTAL\n\n");
	for (i = 0; i <= 2; i++)
	{
		printf("Student[%d]		%d\n", i + 1, student[i].total);
	}
	printf("\nSUJECT			TOTAL\n\n");
	for (j = 0; j <= 2; j++)
	{
		printf("Subject-%d		%d\n", j + 1, total.sub[j]);
	}
	printf("\nGrand Total = %d\n", total.total);
}
*/
/*
struct stores
{
	char name[20];
	float price;
	int quantity;
};
struct stores update(struct stores product, float p, int q);
float mul(struct stores stock);

main()
{
	float p_increment, value;
	int q_increment;

	struct stores item = { "XYZ", 25.75, 12 };

	printf("\nInput increment values : ");
	printf("	price increment and quantity increment\n");
	scanf("%f %d", &p_increment, &q_increment);
	
	item = update(item, p_increment, q_increment);

	printf("Updated values of item\n\n");
	printf("Name		: %s\n", item.name);
	printf("Price		: %f\n", item.price);
	printf("Quantity	: %d\n", item.quantity);

	value = mul(item);

	printf("\nValue of the item = %f\n", value);
}

struct stores update(struct stores product, float p, int q)
{
	product.price += p;
	product.quantity += q;
	return (product);
}

float mul(struct stores stock)
{
	return (stock.price * stock.quantity);
}
*/
/*
struct record
{
	char author[20];
	char title[30];
	float price;
	struct
	{
		char month[10];
		int year;
	} date;
	char publisher[10];
	int quantity;
};

int look_up(struct record table[], char s1[], char s2[], int m);
void get(char string[]);

main()
{
	char title[30], author[20];
	int index, no_of_records;
	char response[10], quantity[10];
	struct record book[] = { {"Ritche", "C Language", 45.00, "May", 1997, "PHI", 10},
		{"Kochan", "Programming in C", 75.50, "July", 1983, "Hayden", 5},
		{"Balagurusamy", "BASIC", 30.00, "January", 1984, "TMH", 0},
		{"Balagurusamy", "COBOL", 60.00, "December", 1988, "Macmillan", 25} };
	no_of_records = sizeof(book) / sizeof(struct record);

	do
	{
		printf("Enter title and author name as per the list\n");
		printf("\nTitle : ");
		get(title);
		printf("Author : ");
		get(author);
		index = look_up(book, title, author, no_of_records);
		printf("%d", index);
		if (index != -1)
		{
			printf("\n%s %s %.2f %s %d %s\n\n",
				book[index].author,
				book[index].title,
				book[index].price,
				book[index].date.month,
				book[index].date.year,
				book[index].publisher);
			printf("Enter number of copies : ");
			get(quantity);
			if (atoi(quantity) < book[index].quantity)
			{
				printf("Cost of %d copies = %.2f\n", atoi(quantity), book[index].price * atoi(quantity));
			}
			else
			{
				printf("\nRequired copies not in stock\n\n");
			}
		}
		else
		{
			printf("\nBook not in list\n\n");
		}
		printf("\nDo you want any other book? (YES / NO) : ");
		get(response);
	} while (response[0] == 'Y' || response[0] == 'y');
	printf("\n\nThank you. Good bye!\n");
}

void get(char string[])
{
	char c;
	int i = 0;
	do
	{
		c = getchar();
		string[i++] = c;
	} while (c != '\n');
	string[i - 1] = '\0';
}

int look_up(struct record table[], char s1[], char s2[], int m)
{
	int i;
	for (i = 0; i < m; i++)
	{
		if (strcmp(s1, table[i].title) == 0 && strcmp(s2, table[i].author) == 0)
		{
			return(i);
		}
	}
	return (-1);
}
*/