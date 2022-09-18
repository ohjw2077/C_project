#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct completeRoots* roots(float y);

struct complexnumber
{
   float R;
   float I;
};

struct completeRoots
{
   struct complexnumber root1;
   struct complexnumber root2;
}Roots1;

main()
{
   float x = 10;
   float a[2];
   struct completeRoots *Roots;
   Roots = roots(x);

   printf("main: square root of %f is %0.3f+i%0.3f\n", x, Roots->root1.R, Roots->root1.I);
   printf("main: square root of %f is %0.3f+i%0.3f\n", x, Roots->root2.R, Roots->root2.I);

   system("pause");
}

struct completeRoots *roots(float y)
{
   struct completeRoots RT,* Rt=&RT;
   if (y >= 0)
   {
      Rt->root1.R = sqrt(y);
      Rt->root1.I = 0;
      Rt->root2.R = -1 * sqrt(y);
      Rt->root2.I = 0;
   }
   if (y < 0)
   {
      y = -1 * y;
      Rt->root1.R = 0;
      Rt->root1.I = sqrt(y);
      Rt->root2.R = 0;
      Rt->root2.I = -1 * sqrt(y);
   }
   return(Rt);
}