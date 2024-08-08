#include<stdio.h>
int main()
{
    int a=10,b=5;

    printf("a : %d\n",a);
    printf("b : %d\n",b);

    a = a-b;
    b = a;
    b = b+a;

    printf("a : %d\n",a);
    printf("b : %d\n",b);

    return 0;
}