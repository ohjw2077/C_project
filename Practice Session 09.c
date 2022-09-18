#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max 100

/*
//Practice 1
main()
{
    int i, N = 0;
    char* ptr;
    char string[max];

    printf("Input N : ");
    scanf_s("%d", &N);

    ptr = (char *)malloc(sizeof(char) * N);

    printf("Input String : ");
    scanf("%s", string);

    for (i = 0; i < N; i++)
    {
        ptr[i] = string[i];
    }

    for (i = N - 1; i >= 0; i--)
    {
        printf("%c", ptr[i]);
    }

    free(ptr);
}
*/
/*
//Practice 2
int steal(int*, int, int);
int intcmp(int, int);

main()
{
    int N = 0, i;
    int* bag;
    int result;

    printf("Input number of bags : ");
    scanf_s("%d", &N);

    bag = (int*)malloc(sizeof(int) * N);

    printf("< Input the bags array >\n");
    for (i = 0; i < N; i++)
    {
        printf("bag %d : ", i + 1);
        scanf_s("%d", &bag[i]);
    }

    result = steal(bag, 0, N);
    printf("You can steal up to %d chocolates!\n", result);

    free(bag);
    system("pause");
}

int steal(int* array, int i, int N)
{
    if (i >= N)
    {
        return 0;
    }
    return intcmp(array[i] + steal(array, i + 2, N), steal(array, i + 1, N));
}

int intcmp(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
*/