#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
int choice;
float len,br,r,side,a,b,c,s,area,perimeter,sur_area;
printf("Choose a shape:\n");
printf("1. Rectangle\n");
printf("2. Circle\n");
printf("3. Triangle\n");
printf("4. Cube\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{case 1:printf("Enter length and breadth of rectangle: ");
        scanf("%f %f",&len,&br);
        area = len*br;
        perimeter = 2 * (len+br);
        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", perimeter);
        break;
case 2:printf("Enter radius of circle: ");
       scanf("%f", &r);
       area =PI*(pow(r,2));
       perimeter = 2 *PI* r;
       printf("Area = %.2f\n", area);
       printf("Circumference = %.2f\n", perimeter);
       break;
case 3: // Triangle (Heron's Formula)
        printf("Enter three sides of the triangle: ");
        scanf("%f %f %f", &a, &b, &c);
        perimeter = a + b + c;
        s = perimeter / 2;  // semi-perimeter
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", perimeter);
        break;
case 4: // Cube
        printf("Enter side of cube: ");
        scanf("%f", &side);
        sur_area = 6 * pow(side, 2);
        printf("Surface Area = %.2f\n", sur_area);
        break;
default:
        printf("Invalid choice!\n");
    }

    return 0;
}
