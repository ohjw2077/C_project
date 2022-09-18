#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793238
#define maxloop 10


main()
{
	float ceta;
	float x;
	int i = 0, j = 0, k = 0;
	double TwoNp1fac = 1, OnepowerN = 1, Xpower2Np1 = 1;
	double SIN = 0;

	printf("Enter the angle of sin X : \n");
	scanf_s("%f", &ceta);

	x = ((float)ceta / 180) * pi;

	printf("\nRadians of angle : %f\n", x);

	for (i = 0; i < maxloop; i++)
	{
		//(-1)^n
		OnepowerN = 1;
		k = i;
		for (j = k; j >= 0; j--)
		{
			if (j == 0)
			{
				OnepowerN = OnepowerN * 1;
				continue;
			}
			OnepowerN = -1 * OnepowerN;
		}

		//x^(2n+1)
		Xpower2Np1 = 1;
		k = 2 * i + 1;
		for (j = k; j >= 0; j--)
		{
			if (j == 0)
			{
				Xpower2Np1 = Xpower2Np1 * 1;
				continue;
			}
			Xpower2Np1 = x * Xpower2Np1;
		}

		//(2n+1)!
		k = 2 * i + 1;
		TwoNp1fac = 1;
		for (j = k; j >= 0; j--)
		{
			if (j == 0)
			{
				TwoNp1fac = TwoNp1fac * 1;
				continue;
			}
			TwoNp1fac = TwoNp1fac * j;
		}
		SIN = SIN + (OnepowerN * (Xpower2Np1 / TwoNp1fac));
	}

	printf("\nsin X is %f\n\n", sin(x));
	printf("OUR sin X is %f\n\n", SIN);

	printf("Error in sin X is %e\n\n", sin(x) - SIN);
	system("pause");
}