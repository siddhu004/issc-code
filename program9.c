#include<stdio.h>
int main()
{
    int a = 0,b = 0;
    float c = 0;

    printf("\nENter the value of a : ");
    scanf("%d",&a);

    printf("\nEntere the value of b : ");
    scanf("%d",&b);

    if(b == 0)
    {
        printf("\nDivision is not posible\n");
    }
    else
    {
        c = a /b;
        printf("Quotient is : %.2f\n",c);
        c = a%b;
        printf("Remainder is : %.2f\n",c);
    }
    return 0;
}