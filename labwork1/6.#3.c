#include<stdio.h>
int main()
{int i,n,r,c;
printf("Armstrong numbers between 0 to 999 :");
for(i=0;i<=999;i++)
 {c=0;
  n=i;
  while(n!=0)
  {r=n%10;
  c=(r*r*r)+c;
  n/=10;
  }
  if (c==i)
  {printf("%d\n",i);}
  }
  return 0;
}
