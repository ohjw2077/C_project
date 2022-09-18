#include <stdio.h>

//defining unique variables
#define pi 3.1415926535897932387673
#define maxloop 80

//declaring functions
void printingMain(void);
double m1powN(int);
double nFac(int);
double XpowN(double, int);
double deg_to_rad(double deg);
double grad_to_rad(double grad);
double rad_to_deg(double rad);
double rad_to_grad(double rad);
int int_discriminator(double x);
void sin(void);
void cos(void);
void tan(void);
void arcsin(void);
void arccos(void);
void arctan(void);
void XpowY(void);
void Xpow1IY(void);
void EpowX(void);
void logEX(void);

main()
{
	int funcNum;
START:
	printingMain(); // starting the interface

	scanf_s("%d", &funcNum);
	while (getchar() != '\n'); // entering the 'char' makes infinite loop but this will help you to break it
	printf("------------------------------\n");

	// executing the function that user selected according to 'funcNum' variable
	if (funcNum == 1) sin();
	else if (funcNum == 2) cos();
	else if (funcNum == 3) tan();
	else if (funcNum == 4) arcsin();
	else if (funcNum == 5) arccos();
	else if (funcNum == 6) arctan();
	else if (funcNum == 7) XpowY();
	else if (funcNum == 8) Xpow1IY();
	else if (funcNum == 9) EpowX();
	else if (funcNum == 10)logEX();
	else                             // if user select the wrong number, ask again
	{
		printf("Your input is WRONG Try Again!\n");
		goto START;
	}
	printf("\n");
	system("pause");
}

// printing main interface
void printingMain(void)
{
	printf("Input Your Desired Function \n");
	printf("1) Sin(x)\n");
	printf("2) Cos(x)\n");
	printf("3) Tan(x)\n");
	printf("4) ArcSin(x)\n");
	printf("5) ArcCos(x)\n");
	printf("6) ArcTan(x)\n");
	printf("7) x^y\n");
	printf("8) x^(1/y)\n");
	printf("9) e^x\n");
	printf("10) loge(x)\n");
}

// element functions for calculating Taylor series
// (-1)^n Function
double m1powN(int n)
{
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= -1;
	}
	return result;
}

// (n)! Function
double nFac(int n)
{
	double result;
	if (n == 0 || n == 1)
		return 1;
	else
		return n * nFac(n - 1);
}

// X^n Function
double XpowN(double x, int n)
{
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= x;
	}
	return result;
}

// Angle Changing Functions
//change degrees to radians
double deg_to_rad(double deg)
{
	double rad = 0;
	rad = (deg * pi) / 180;
	return rad;
}

//change gradians to radians
double grad_to_rad(double grad)
{
	double rad = 0;
	rad = (grad * pi) / 200;
	return rad;
}

//change radians to degrees
double rad_to_deg(double rad)
{
	double deg = 0;
	deg = (rad / pi) * 180;
	return deg;
}

//change radians to gradians
double rad_to_grad(double rad)
{
	double grad = 0;
	grad = (rad / pi) * 200;
	return grad;
}

//integer discriminating Function
int int_discriminator(double x)
{
	if (x - (int)x == 0) // if x is float, (int)x store only integer part of x. so when x -(int)x = 0 , x is integer
		return 1;
	else                 // else, x is float
		return 0;
}

// sin(x) Function
void sin(void)
{
	int AngT = 0;
	double x = 0, rad = 0, SIN = 0;

	//Asking angle type
	printf("Sin(x) has been Chosen\n");
	printf("\nInput Your Desired Angle Type\n");
	printf("1) Degrees\n");
	printf("2) Radians\n");
	printf("3) Gradians\n");
	scanf_s("%d", &AngT);

	printf("Input Your Desired Angle Value : ");
	scanf_s("%lf", &x);

	//Changing angle type
	if (AngT == 1)
		rad = deg_to_rad(x);
	else if (AngT == 2)
		rad = x;
	else
		rad = grad_to_rad(x);
	
	// calculating sin(x) = sigma[0,inf)((-1)^n * x^(2n+1) / (2n+1)!)
	for (int n = 0; n < maxloop; n++)
	{
		SIN = SIN + (m1powN(n) * (XpowN(rad, 2 * n + 1) / nFac(2 * n + 1)));
	}
	
	printf("Sin(%lf) = %lf", x, SIN);
}

// cos(x) Function
void cos(void)
{
	int AngT = 0;
	double x = 0, rad = 0, COS = 0;

	//Asking angle type
	printf("Cos(x) has been Chosen\n");
	printf("\nInput Your Desired Angle Type\n");
	printf("1) Degrees\n");
	printf("2) Radians\n");
	printf("3) Gradians\n");
	scanf_s("%d", &AngT);

	printf("Input Your Desired Angle Value : ");
	scanf_s("%lf", &x);

	//Changing angle type
	if (AngT == 1)
		rad = deg_to_rad(x);
	else if (AngT == 2)
		rad = x;
	else
		rad = grad_to_rad(x);

	// calculating cos(x) = sigma[0,inf)((-1)^(n) * x^(2n) / (2n)!)
	for (int n = 0; n < maxloop; n++)
	{
		COS = COS + (m1powN(n) * XpowN(rad, 2 * n) / nFac(2 * n));
	}

	printf("Cos(%lf) = %lf", x, COS);
}

// tan(x) Function
void tan(void)
{
	int AngT;
	double x = 0, rad = 0, SIN = 0, COS = 0;

	//Asking angle type
	printf("Tan(x) has been chosen\n");
	printf("\nInput Your Desired Angle Type\n");
	printf("1) Degrees\n");
	printf("2) Radians\n");
	printf("3) Gradians\n");
	scanf_s("%d", &AngT);

	printf("Input Your Desired Angle Value : ");
	scanf_s("%lf", &x);

	//Changing angle type
	if (AngT == 1)
		rad = deg_to_rad(x);
	else if (AngT == 2)
		rad = x;
	else
		rad = grad_to_rad(x);

	//calculating sin(x) = sigma[0,inf)((-1)^n * x^(2n+1) / (2n+1)!) and cos(x) = sigma[0,inf)((-1)^(n) * x^(2n) / (2n)!)
	for (int n = 0; n < maxloop; n++)
	{
		SIN = SIN + (m1powN(n) * (XpowN(rad, 2 * n + 1) / nFac(2 * n + 1)));
		COS = COS + (m1powN(n) * (XpowN(rad, 2 * n) / nFac(2 * n)));
	}
	
	// When COS = 0, we have to show TAN is infintie
	if (AngT == 1 && (x == 90 || x == -90))  
	{
		printf("Tan(%lf) = inf", x);
	}
	else if (AngT == 2 && (x == pi / 2 || x == -pi / 2))
	{
		printf("Tan(%lf) = inf", x);
	}
	else if (AngT == 3 && (x == 100 || x == -100))
	{
		printf("Tan(%lf) = inf", x);
	}
	else
	{
		// Tan(x) = Sin(x) / Cos(x)
		printf("Tan(%lf) = %lf", x, SIN / COS);
	}
}

// ArcSin(x) Function
void arcsin(void)
{
	int AngT = 0;
	double x = 0, result = 0, ARCSIN = 0;

	printf("ArcSin(x) has been Chosen\n");
AskAgain:
	printf("Input Your Desired Value : ");
	scanf_s("%lf", &x);
	while (getchar() != '\n'); // entering the 'char' makes infinite loop but this will help you to break it

	// x should be |x| <= 1, else should be treat as error
	if (x > 1 || x < -1)
	{
		printf("Your Input is Wrong. x should be |x| <= 1\n");
		goto AskAgain;
	}
	else
	{
		//calculating ArcSin(x) = sigma[0,inf)((2n)! * x^(2n+1) / (4^n * (n!)^2 * (2n+1)))
		for (int n = 0; n < maxloop; n++)
		{
			ARCSIN = ARCSIN + (nFac(2 * n) * XpowN(x, 2 * n + 1) / (XpowN(4, n) * XpowN(nFac(n), 2) * ((double)2 * n + 1)));
		}

		//printing in all format(degress, radians, gradians)
		printf("1) Degrees : ArcSin(%lf) = %lf\n", x, rad_to_deg(ARCSIN));
		printf("2) Radians : ArcSin(%lf) = %lf\n", x, ARCSIN);
		printf("3) Gradians : ArcSin(%lf) = %lf\n", x, rad_to_grad(ARCSIN));
	}
}

// ArcCos(x) Function
void arccos(void)
{
	int AngT = 0;
	double x = 0, result = 0, ARCCOS = 0, ARCSIN = 0;

	printf("ArcCos(x) has been Chosen\n");
AskAgain:
	printf("Input Your Desired Value : ");
	scanf_s("%lf", &x);
	while (getchar() != '\n'); // entering the 'char' makes infinite loop but this will help you to break it

	// x should be |x| <= 1, else should be treat as error
	if (x > 1 || x < -1)
	{
		printf("Your Input is Wrong. x should be |x| <= 1\n");
		goto AskAgain;
	}
	else
	{
		//calculating ArcSin(x) = sigma[0,inf)((2n)! * x^(2n+1) / (4^n * (n!)^2 * (2n+1)))
		for (int n = 0; n < maxloop; n++)
		{
			ARCSIN = ARCSIN + (nFac(2 * n) * XpowN(x, 2 * n + 1) / (XpowN(4, n) * XpowN(nFac(n), 2) * ((double)2 * n + 1)));
		}

		//ArcCos(x) = pi/2 - ArcSin(x)
		ARCCOS = (pi / 2) - ARCSIN;

		//printing in all format(degress, radians, gradians)
		printf("1) Degrees : ArcCos(%lf) = %lf\n", x, rad_to_deg(ARCCOS));
		printf("2) Radians : ArcCos(%lf) = %lf\n", x, ARCCOS);
		printf("3) Gradians : ArcCos(%lf) = %lf\n", x, rad_to_grad(ARCCOS));
	}
}

// ArcTan(x) Function
void arctan(void)
{
	int AngT = 0;
	double x = 0, result = 0, ARCTAN = 0;

	printf("ArcTan(x) has been Chosen\n");
AskAgain:
	printf("Input Your Desired Value : ");
	scanf_s("%lf", &x);
	while (getchar() != '\n'); // entering the 'char' makes infinite loop but this will help you to break it

	// x should be |x| <= 1, else should be treat as error
	if (x > 1 || x < -1)
	{
		printf("Your Input is Wrong. x should be |x| <= 1\n");
		goto AskAgain;
	}
	else
	{
		//calculating ArcTan(x) = sigma[0,inf)((-1)^n * x^(2n+1) / (2n+!))
		for (int n = 0; n < maxloop; n++)
		{
			ARCTAN = ARCTAN + (m1powN(n) * (XpowN(x, 2 * n + 1) / ((double)2 * n + 1)));
		}

		//printing in all format(degress, radians, gradians)
		printf("1) Degrees : ArcTan(%lf) = %lf\n", x, rad_to_deg(ARCTAN));
		printf("2) Radians : ArcTan(%lf) = %lf\n", x, ARCTAN);
		printf("3) Gradians : ArcTan(%lf) = %lf\n", x, rad_to_grad(ARCTAN));
	}
}

// x^y Function
void XpowY(void)
{
	int D;
	double y, x, result = 1;
	
	printf("x^y has been chosen\n");
	printf("Input Your Desired Value of x : ");
	scanf_s("%lf", &x);
AskAgain:
	printf("Input Your Desired Value of y : ");
	scanf_s("%lf", &y);
	while (getchar() != '\n'); // entering the 'char' makes infinite loop but this will help you to break it

	D = int_discriminator(y); // if D = 0, y is not integer. if D = 1, y is integer

	if (D == 0) // when y is not integer
	{
		printf("Your input is Wrong. y should be integer!\n");
		goto AskAgain;
	}
	else // when y is integer
	{
		if (y < 0) // if y < 0, reverse the result
		{
			for (double i = 1; i <= -y; i++)
			{
				result *= x;
			}
			printf("%lf ^ %lf = %lf", x, y, 1 / result);
		}
		else if (y == 0) // if y = 0, result is always 1.
		{
			printf("%lf ^ %lf = 1", x, y);
		}
		else // multiply x for y times
		{
			for (double i = 1; i <= y; i++)
			{
				result *= x;
			}
			printf("%lf ^ %lf = %lf", x, y, result);
		}
	}
}

// x^(1/y) Function
void Xpow1IY(void)
{
	int D;
	double y, x = 0, lnX = 0, lnK = 0, result = 0;

	printf("x^(1/y) has been chosen\n");
AskAgain1:
	printf("Input Your Desired Value of x : ");
	scanf_s("%lf", &x);
	while (getchar() != '\n'); // entering the 'char' makes infinite loop but this will help you to break it

	if (x < 0) // if  x < 0, imaginary number can be an output. so I will treat it as error
	{
		printf("Your input is Wrong. x should be positive number\n");
		goto AskAgain1;
	}
AskAgain2:
	printf("Input Your Desired Value of y : ");
	scanf_s("%lf", &y);
	while (getchar() != '\n');

	D = int_discriminator(y); // if D = 0, y is not integer. if D = 1, y is integer

	if (D == 0)   // when y is not integer
	{
		printf("Your input is Wrong. y should be integer!\n");
		goto AskAgain2;
	}
	else         // when y is integer
	{
		// when k = x^(1/y), take loge both side
		for (int n = 1; n < maxloop; n++)
		{
			lnX = lnX + 2 * (XpowN((x - 1) / (x + 1), (double)2 * n - 1) / ((double)2 * n - 1));
		}

		// lnk = (1/y) * lnx
		lnK = (1 / y) * lnX;

		// k = e^(lnk) = e^((1/y) * lnx) (we have to find k, k = x^(1/y))
		for (int n = 0; n < maxloop; n++)
		{
			result = result + (XpowN(lnK, n) / nFac(n));
		}
		printf("%lf^(1/%lf) = %lf", x, y, result);
	}
}

// e^(x) Function
void EpowX(void)
{
	double x = 0, Ex = 0;

	printf("e^x has been Chosen\n");
	printf("Input Your Desired Value : ");
	scanf_s("%lf", &x);
	
	//calculating e^x = sigma[o,inf)(x^n / n!)
	for (int n = 0; n < maxloop; n++)
	{
		Ex = Ex + (XpowN(x,n) / nFac(n));
	}
	
	printf("e^(%lf) = %lf", x, Ex);
}

// loge(x) Function
void logEX(void)
{
	double x = 0, lnX = 0;

	printf("loge(x) has been chosen\n");
	printf("Input Your Desired Value : ");
	scanf_s("%lf", &x);

	//calculating ln(x) = 2 * sigma[1,inf)(((x-1) / (x+1))^(2n-1) / (2n-1)), when x > 0
	for (int n = 1; n < maxloop; n++)
	{
		lnX = lnX + 2 *(XpowN((x - 1) / (x + 1), (double)2 * n - 1) / ((double)2 * n - 1));
	}

	printf("loge(%lf) = %lf", x, lnX);
}