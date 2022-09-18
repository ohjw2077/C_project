#include <stdio.h>
#include <string.h>
#include <ctype.h>

#pragma warning(disable:4996)
/*
//Practice 1
main()
{
	char text[100] = { 0 };
	int i = 0, j = 0, k = 0, counting[26] = { 0 }, alphNum;

	printf("Input any text : ");
	scanf("%s", text);

	do
	{
		text[i] = tolower(text[i]);
		i++;
	} while (text[i] != '\0');

	do
	{
		if (text[j] >= 'a' && text[j] <= 'z')
		{
			alphNum = text[j] - 'a';
			counting[alphNum]++;
		}
		j++;
	} while (text[j] != '\0');

	for (k = 0; k < 26; k++)
	{
		printf("%c : %d times\n", 'A' + k, counting[k]);
	}
}
*/
/*
//Practice 2
main()
{
	char ChessBoard[8][8];
	char position[2] = { 0, 0 }, result[2];
	int Xmove[8] = { -1,1,2,2,1,-1,-2,-2 }, Ymove[8] = { 2,2,1,-1,-2,-2,-1,1 };
	int xPos, yPos, movedX, movedY, count = 0;

	printf("Input positon of the Knight : ");
	scanf("%s", position);

	xPos = position[0] - 96;
	yPos = position[1] - 48;

	printf("Knight in %s, can move to ", position, count);

	for (int i = 0; i < 8; i++)
	{
		movedX = xPos + Xmove[i];
		movedY = yPos + Ymove[i];

		if (movedX >= 1 && movedX <= 8 && movedY >= 1 && movedX <= 8)
		{
			count += 1;
			result[0] = movedX + 96;
			result[1] = movedY+ 48;

			printf("%c%c ", result[0], result[1]);
		}
	}
	printf("(total %d moves)\n\n", count);
	system("pause");
}
*/
/*
//Practice 3
main()
{
	int LoopPattern[100][100] = { 0 };
	int N, row, col, num = 1, Plus1 = 1, max = 0;
	int i = 0, j = -1;

	printf("Input your desired number : ");
	scanf_s("%d", &N);

	max = N;

	do
	{
		for (row = 0; row < N; row++)
		{
			j = j + Plus1;
			LoopPattern[i][j] = num;
			num++;
		}

		N--;
		if (N < 0)
		{
			break;
		}

		for (row = 0; row < N; row++)
		{
			i = i + Plus1;
			LoopPattern[i][j] = num;
			num++;

		}
		Plus1 = -Plus1;

	} while (1);

	for (row = 0; row < max; row++)
	{
		for (col = 0; col < max; col++)
		{
			printf("%-3d  ", LoopPattern[row][col]);
		}
		printf("\n");
	}
}
*/