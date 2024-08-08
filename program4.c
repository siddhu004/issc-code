#include<stdio.h>
int main()
{
    int a = 5;
    int b = 10;

    printf("a : %d\n",a);
    printf("b : %d\n",b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a : %d\n",a);
    printf("b : %d\n",a);

    return 0;
}