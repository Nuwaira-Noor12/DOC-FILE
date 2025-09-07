#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,x,y,large,L2,sumXY;
printf("Enter the sides of the triangle\n");
scanf("%f %f %f",&a,&b,&c);
if ((a>=b+c)||(b>=a+c)||(c>=a+b))
    {
  printf("No Triangle is formed.\n");}
else
    {large=fmax(a,fmax(b,c));
        if (large==a)
            {x=b;
            y=c;}
        else if (large==b)
            {x=a;
            y=c;}
        else
            {x=a;
            y=b;}
        L2=pow(large,2);
        sumXY=pow(x,2)+pow(y,2);
        if (L2==sumXY)
        {printf("Right-angled triangle is formed.\n");
        }
        else if (L2>sumXY)
        {printf("Obtuse-angled triangle is formed.\n");
        }
        else
        {printf("Acute-angled triangle is formed.\n");
        }
    }
return 0;
}
