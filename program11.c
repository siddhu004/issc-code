#include<stdio.h>
int main()
{
    int a = 0,ans = 0;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    if(a < 100)
        printf("A is small number\n");
    else if (a > 100 && a < 1000)
        printf("A is big number\n");
    else
        printf("A is large number\n");

    return 0;
}