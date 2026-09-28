#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,quotient,difference,product,remainder;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    sum=a+b;
    remainder=a%b;
    product=a*b;
   printf("sum=%d\n",sum);
    difference=a-b;
    printf("difference=%d\n",difference);
    quotient=a/b;
    printf("quotient=%d\n",quotient);
    printf("remainder=%d\n",remainder);
    printf("product=%d",product);
    return 0;
}
