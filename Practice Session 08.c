#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
//Practice 1
main()
{
    char* str1, * str2, a;
    int N, swap, i;

    printf("Input your desired integer N : ");
    scanf_s("%d", &N);

    str1 = (char*)malloc(sizeof(char) * (N));
    str2 = (char*)malloc(sizeof(char) * (N));
    while (getchar() != '\n');

    printf("Input %d elements : ", N);

    for (i = 0; i < N; i++)
    {
        scanf("%c", &str1[i]);
    }   
    while (getchar() != '\n');

    strcpy(str2, str1);

    printf("Input swapping value to swap the values in a cycle : ");
    scanf_s("%d", &swap);

    for (i = 0; i < N; i++)
    {
        if (i + swap < N)
        {
            str1[i + swap] = str2[i];
        }   
        else
        {
            str1[i + swap - N] = str2[i];
        }
    }

    str1[i] = '\0';
    printf("%s", str1);
}
*/

/*
//Practice 2
main()
{
    char* str1, * str2;
    int n1, n2;

    printf("input n1, n2 : ");
    scanf_s("%d %d", &n1, &n2);

    str1 = (char*)malloc(sizeof(char) * n1);
    str2 = (char*)malloc(sizeof(char) * n2);

    printf("input 1st string : ");
    scanf("%s", str1);

    printf("input 2nd string : ");
    while (getchar() != '\n');

    gets(str2);

    printf("\n%s\n", strcat(str1, str2));
}
*/