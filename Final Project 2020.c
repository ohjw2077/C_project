#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// all sentence doesn't over 100 character so I define max length of string to 100
#define max_len 100

//declaring Functions
void welcomscreen(void);
void mainscreen(void);
void profscreen(void);
void studscreen(void);
void math_Data(void);
void sci_Data(void);
void math_frame(void);
void sci_frame(void);
void Askgrade(void);
char grade(float);
void bubble_sort(struct info arr[], int);

// Global variables
FILE* fp1, * fp2;
char botton;
char filename1[50], filename2[50];

int A = 0, B = 0, C = 0, D = 0;
int count = 0;
char mstr1[max_len], mstr2[max_len], mstr3[max_len], mstr4[max_len];
char sstr1[max_len], sstr2[max_len], sstr3[max_len], sstr4[max_len];


struct info
{
	char id[10];
	char name[5];
	int mid;
	int project;
	int final;
	int total;
	float pct;
	char grade;
} m[10] = { 0, }, s[10] = { 0, };

main()
{
	welcomscreen();
}

// function that load values in FILE to structure and printf main screen
void welcomscreen(void)
{
	count = 0; //initializing count variable so that error doesn't occur when we Show all records again after we BACK to welcomescreen
ask1:
	printf("Enter First file name e.g. Math.txt : ");
	scanf("%s", filename1);
	while (getchar() != '\n');
	if (strcmp(filename1, "Math.txt") == 0) //check the file name
	{
		math_Data();
		printf("First file uploaded successfully!\n\n");
	}
	else if (strcmp(filename1, "Science.txt") == 0)
	{
		sci_Data();
		printf("First file uploaded successfully!\n\n");
	}
	else
	{
		printf("File isn't uploaded, Please try again\n\n");
		goto ask1;
	}

ask2:
	printf("Enter Second file name e.g. Science.txt : ");
	scanf("%s", filename2);
	while (getchar() != '\n');
	if (strcmp(filename1, filename2) == 0) // to check the file not to be same
	{
		printf("Same File! Enter another File\n\n"); 
		goto ask2;
	}
	else
	{
		if (strcmp(filename2, "Math.txt") == 0) //check the file name
		{
			math_Data();
			printf("Second file uploaded successfully!\n\n");
		}
		else if (strcmp(filename2, "Science.txt") == 0)
		{
			sci_Data();
			printf("Second file uploaded successfully!\n\n");
		}
		else
		{
			printf("File isn't uploaded, Please try again\n\n");
			goto ask2;
		}
	}

	printf("Welcome to final Exam!\n\n");
	printf("Global inputs\n");
	printf("B for Back\n");
	printf("E for Exit\n");
	printf("M for Main\n");
	printf("Meaning of Global Inputs is you can enter these options at any time in whole project\n");
	printf("even they are not printed on console\n");
	printf("Except where mention to enter specific data type input\n\n");

	mainscreen();
}
// main screen that asking professor or student mode
void mainscreen(void)
{
	char PorS;
	printf("Please Press\n");
	printf("P for Professor\n");
	printf("S for Student ");

	PorS = getchar();
	while (getchar() != '\n');

	if (PorS == 'P' || PorS == 'p') // go to professor mode
	{
		system("cls");
		profscreen();
	}
	else if (PorS == 'S' || PorS == 's') // go to student mode
	{
		system("cls");
		studscreen();
	}
	else if (PorS == 'M' || PorS == 'm') // go to Main
	{
		system("cls");
		mainscreen();
	}
	else if (PorS == 'E' || PorS == 'e') // exit the program
		exit(1);
	else if (PorS == 'B' || PorS == 'b') // go to back
	{
		system("cls");
		welcomscreen();
	}
	else
	{
		system("cls");
		printf("Wrong Input!\n");
		mainscreen();
	}
}
// professor mode screen, ask showing records or calculating mode
void profscreen(void)
{
	char SorC, YorN;

	printf("Please Press\n");
	printf("S for Show All Records\n");
	printf("C for Calculate the Final Exam ");

	SorC = getchar();
	while (getchar() != '\n');

	// decending records
	bubble_sort(m, 10); // Math
	bubble_sort(s, 10); // Science

	if (SorC == 'S' || SorC == 's') // go to show all records mode
	{
		if (count > 0) // to check does records are upated. count is the variable of how many times does records are updated
		{
			math_frame();
			for (int i = 0; i < 10; i++)
			{
				m[i].grade = grade(m[i].pct);
				printf("%s	%s 	%d	%d	%d	%d	%f	%c\n", m[i].id, m[i].name, m[i].mid, m[i].project, m[i].final, m[i].total, m[i].pct, m[i].grade);
			}
			sci_frame();
			for (int i = 0; i < 10; i++)
			{
				s[i].grade = grade(s[i].pct);
				printf("%s	%s 	%d	%d	%d	%d	%f	%c\n", s[i].id, s[i].name, s[i].mid, s[i].project, s[i].final, s[i].total, s[i].pct, s[i].grade);
			}
		}
		else // when records are not updated
		{
			math_frame();
			for (int i = 0; i < 10; i++)
			{
				m[i].grade = ' ';
				printf("%s	%s 	%d	%d	%d	%d	%f	%c\n", m[i].id, m[i].name, m[i].mid, m[i].project, m[i].final, m[i].total, m[i].pct, m[i].grade);
			}
			sci_frame();
			for (int i = 0; i < 10; i++)
			{
				s[i].grade = ' ';
				printf("%s	%s 	%d	%d	%d	%d	%f	%c\n", s[i].id, s[i].name, s[i].mid, s[i].project, s[i].final, s[i].total, s[i].pct, s[i].grade);
			}
		}

	again1:
		printf("\n\nB for back, E for exit, M for main\n"); // ask for Back, Exit, or Main
		scanf("%c", &botton);
		while (getchar() != '\n');

		if (botton == 'M' || botton == 'm') // go to main
		{
			system("cls");
			mainscreen();
		}
		else if (botton == 'E' || botton == 'e') // exit the program
		{
			exit(1);
		}
		else if (botton == 'B' || botton == 'b') // go to back
		{
			system("cls");
			profscreen();
		}
		else
		{
			system("cls");
			printf("Wrong Input!\n");
			goto again1;
		}
	}
	else if (SorC == 'C' || SorC == 'c') // go to calculating mode
	{
		printf("\n");
		Askgrade();
		math_frame();
		for (int i = 0; i < 10; i++)
		{
			m[i].pct = ((float)m[i].total / 3);
			m[i].grade = grade(m[i].pct);
			printf("%s	%s 	%d	%d	%d	%d	%f	%c\n", m[i].id, m[i].name, m[i].mid, m[i].project, m[i].final, m[i].total, m[i].pct, m[i].grade);
		}

		sci_frame();
		for (int i = 0; i < 10; i++)
		{
			s[i].pct = ((float)s[i].total / 3);
			s[i].grade = grade(s[i].pct);
			printf("%s	%s 	%d	%d	%d	%d	%f	%c\n", s[i].id, s[i].name, s[i].mid, s[i].project, s[i].final, s[i].total, s[i].pct, s[i].grade);
		}
		count++; // counting how many times does records are updated
		printf("\n\n");
	ask:
		printf("Do you want to Write the Grades in file ?\n");
		printf("Please Press\n");
		printf("Y for Yes\n");
		printf("N for No\n");

		YorN = getchar();
		while (getchar() != '\n');


		if (YorN == 'Y' || YorN == 'y')
		{
			FILE* fp = fopen("result.txt", "wt"); // making new result file
			fprintf(fp, "%s", mstr1);
			fprintf(fp, "%s", mstr2);
			fprintf(fp, "%s", mstr3);
			fprintf(fp, "ID	NAME 	MID	PROJECT	FINAL	TOTAL	PERCENTAGE	GRADE\n");
			for (int i = 0; i < 10; i++)
			{
				fprintf(fp, "%s	%s 	%d	%d	%d	%d	%f	%c\n", m[i].id, m[i].name, m[i].mid, m[i].project, m[i].final, m[i].total, m[i].pct, grade(m[i].pct));
			}
			fprintf(fp, "%s", sstr1);
			fprintf(fp, "%s", sstr2);
			fprintf(fp, "%s", sstr3);
			fprintf(fp, "ID	NAME 	MID	PROJECT	FINAL	TOTAL	PERCENTAGE	GRADE\n");
			for (int i = 0; i < 10; i++)
			{
				fprintf(fp, "%s	%s 	%d	%d	%d	%d	%f	%c\n", s[i].id, s[i].name, s[i].mid, s[i].project, s[i].final, s[i].total, s[i].pct, grade(s[i].pct));
			}
			fclose(fp);
			printf("\nThe result.txt is created successfully!!!\n");
		again2:
			printf("\n\nB for back, E for exit, M for main\n");
			scanf("%c", &botton);
			while (getchar() != '\n');

			if (botton == 'M' || botton == 'm') // go to main
			{
				system("cls");
				mainscreen();
			}
			else if (botton == 'E' || botton == 'e') // exit the program
			{
				exit(1);
			}
			else if (botton == 'B' || botton == 'b') // go to back
			{
				system("cls");
				goto ask;
			}
			else
			{
				system("cls");
				printf("Wrong Input!\n");
				goto again2;
			}
		}
		else if (YorN == 'N' || YorN == 'n') // just go to main if you dont want to make result file
		{
			system("cls");
			mainscreen();
		}
		else if (YorN == 'M' || YorN == 'm') // go to main
		{
			system("cls");
			mainscreen();
		}
		else if (YorN == 'E' || YorN == 'e') // exit the program
			exit(1);
		else if (YorN == 'B' || YorN == 'b') // go to back
		{
			system("cls");
			profscreen();
		}
		else
		{
			system("cls");
			printf("Wrong Input!\n");
			goto ask;
		}
	}
	else if (SorC == 'M' || SorC == 'm') // go to main
	{
		system("cls");
		mainscreen();
	}
	else if (SorC == 'E' || SorC == 'e') // exit the program
		exit(1);
	else if (SorC == 'B' || SorC == 'b') // go to back
	{
		system("cls");
		mainscreen();
	}
	else
	{
		system("cls");
		printf("Wrong Input!\n");
		profscreen();
	}
}
// student mode, ask student to find there own records
void studscreen(void)
{
	char IorN[30];
	int i;

	printf("Please enter your ID or Name in order to check your scores : ");
	scanf("%s", IorN);
	while (getchar() != '\n');

	if (IorN[0] == 'M' || IorN[0] == 'm') // go to main
	{
		system("cls");
		mainscreen();
	}
	else if (IorN[0] == 'E' || IorN[0] == 'e') // exit the program
		exit(1);
	else if (IorN[0] == 'B' || IorN[0] == 'b') // go to back
	{
		system("cls");
		mainscreen();
	}
	else
	{
		for (i = 0; i < 10; i++) // check id
		{
			if (strcmp(IorN, m[i].id) == 0 || strcmp(IorN, m[i].name) == 0)
				break;
			else
				continue;
		}
		if (i < 10) // if id exist, print it's records
		{
			math_frame();
			printf("%s	%s 	%d	%d	%d	%d	%f	%c\n", m[i].id, m[i].name, m[i].mid, m[i].project, m[i].final, m[i].total, m[i].pct, m[i].grade);
		}
		else // if id do not exist, notice it
		{
			printf("\nThe Student you are looking for is do not exist in Math course!");
		}

		for (i = 0; i < 10; i++) // check id
		{
			if (strcmp(IorN, s[i].id) == 0 || strcmp(IorN, s[i].name) == 0)
				break;
			else
				continue;
		}
		if (i < 10) // if id exist, print it's records
		{
			sci_frame();
			printf("%s	%s 	%d	%d	%d	%d	%f	%c\n", s[i].id, s[i].name, s[i].mid, s[i].project, s[i].final, s[i].total, s[i].pct, s[i].grade);
		}
		else // if id do not exist, notice it
		{
			printf("\nThe Student you are looking for is do not exist in Science course!");
		}

	again3:
		printf("\n\nB for back, E for exit, M for main\n"); // ask for back, exit, main
		scanf("%c", &botton);
		while (getchar() != '\n');

		if (botton == 'M' || botton == 'm') // go to main
		{
			system("cls");
			mainscreen();
		}
		else if (botton == 'E' || botton == 'e') // exit the program
		{
			exit(1);
		}
		else if (botton == 'B' || botton == 'b') // go to back
		{
			system("cls");
			studscreen();
		}
		else
		{
			system("cls");
			printf("Wrong Input!\n");
			goto again3;
		}
	}
}

// load values in FILE to math structure
void math_Data(void)
{
	int i;

	char mid[10], project[10], final[11], total[10];
	
	fp1 = fopen("Math.txt", "r");

	//get first 4 sentence from math file and store in variable
	fgets(mstr1, sizeof(mstr1), fp1);
	fgets(mstr2, sizeof(mstr2), fp1);
	fgets(mstr3, sizeof(mstr3), fp1);
	fgets(mstr4, sizeof(mstr4), fp1);

	if (fp1) // when FILE fp1 opened
	{
		i = 0;
		while (!feof(fp1) && i < 10) // load values in FILE fp1 to math structure
		{
			fscanf(fp1, "%s %s %s %s %s %s", m[i].id, m[i].name, mid, project, final, total);

			m[i].mid = atoi(mid);
			m[i].project = atoi(project);
			m[i].final = atoi(final);
			m[i].total = atoi(total);
			m[i].pct = 0;

			i++;
		}
		fclose(fp1);
	}
}
// load values in FILE to science structure
void sci_Data(void)
{
	int i;

	char mid[10], project[10], final[11], total[10];

	fp2 = fopen("Science.txt", "r");

	//get first 4 sentence from science file and store in variable
	fgets(sstr1, sizeof(sstr1), fp2);
	fgets(sstr2, sizeof(sstr2), fp2);
	fgets(sstr3, sizeof(sstr3), fp2);
	fgets(sstr4, sizeof(sstr4), fp2);

	if (fp2) // when FILE fp2 opened
	{
		i = 0;
		while (!feof(fp2) && i < 10) // load values in FILE fp2 to science structure
		{
			fscanf(fp2, "%s %s %s %s %s %s", s[i].id, s[i].name, mid, project, final, total);

			s[i].mid = atoi(mid);
			s[i].project = atoi(project);
			s[i].final = atoi(final);
			s[i].total = atoi(total);
			s[i].pct = 0;

			i++;
		}
		fclose(fp2);
	}
}
// frame of math chart
void math_frame(void)
{
	printf("\n\n");
	printf("%s", mstr1);
	printf("%s", mstr2);
	printf("%s", mstr3);
	printf("ID	NAME 	MID	PROJECT	FINAL	TOTAL	PERCENTAGE	GRADE\n");
}
// frame of science chart
void sci_frame(void)
{
	printf("\n\n");
	printf("%s", sstr1);
	printf("%s", sstr2);
	printf("%s", sstr3);
	printf("ID	NAME 	MID	PROJECT	FINAL	TOTAL	PERCENTAGE	GRADE\n");
}

// Asking grade MIN values
void Askgrade(void)
{
	printf("Please enter the MIN Percentage for grade A : ");
	scanf_s("%d", &A);
	while (getchar() != '\n');
	printf("Please enter the MIN Percentage for grade B : ");
	scanf_s("%d", &B);
	while (getchar() != '\n');
	printf("Please enter the MIN Percentage for grade C : ");
	scanf_s("%d", &C);
	while (getchar() != '\n');
	printf("Please enter the MIN Percentage for grade D : ");
	scanf_s("%d", &D);
	while (getchar() != '\n');
}
// determinating grade function
char grade(float pct)
{
	if (pct >= A) return 'A';
	else if (pct >= B) return 'B';
	else if (pct >= C) return 'C';
	else if (pct >= D) return 'D';
	else return 'F';
}
// bubble sort decending function
void bubble_sort(struct info arr[], int n)
{
	struct info temp; // declare temporary stroage

	for (int i = 0; i< n; i++) //repeating n times
	{
		for (int j = 0; j < n-1; j++) // reapeating n-1 times
		{
			if (arr[j].total < arr[j + 1].total) //compare values
			{
				temp = arr[j]; // shift smaller value to right
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}