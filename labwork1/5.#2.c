#include <stdio.h>
#include <math.h>

int main()
{float p,r,t;
float SI, CI;
printf("Enter Principal Amount: ");
scanf("%f",&p);
printf("Enter Rate of Interest (in %%): ");
scanf("%f",&r);
printf("Enter Time (in years): ");
scanf("%f",&t);
SI = (p*r*t) / 100;
CI= p*(pow((1 + r/ 100),t)-1);
printf("\nSimple Interest = %.2f\n",SI);
printf("Compound Interest = %.2f\n",CI);
return 0;
}
