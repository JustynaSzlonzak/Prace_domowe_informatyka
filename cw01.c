
#include <stdio.h>

int main()
{
float a,b,c;

printf("Podaj a i b ");
scanf("%f %f", &a, &b);

printf("\n %.2f + %.3f = %.1f\n", a, b, a+b);
printf("\n %.2f - %.3f = %.1f\n", a, b, a-b);
printf("\n %.2f * %.3f = %.1f\n", a, b, a*b);
printf("\n %.2f / %.3f = %.1f\n", a, b, a/b);

printf("\n stare a= %f", a);

a=a*b;

printf("\n nowe a= %f", a);



//printf("\n %.2f / %.3f = %.4f \n ", a, b, a/b);


return 0;
}


