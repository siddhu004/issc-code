#include<stdio.h>
int main()
{
    int a=10,b=5,c=0;

    printf("a : %d\n",a);
    printf("b : %d\n",b);
    printf("c : %d\n",c);

    c = b;
    b = a;
    a = c;

    printf("a : %d\n",a);
    printf("b : %d\n",b);
    printf("c : %d\n",c);

    return 0;
}