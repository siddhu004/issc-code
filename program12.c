#include<stdio.h>
int main()
{
    int a = 0,ans = 0;

    printf("Enter the Year : ");
    scanf("%d",&a);

    if(a % 400 == 0  ||( a%4 == 0 && a%100 != 0))
        printf("A is Leap year\n");
    else
        printf("A is not leap year\n");

    return 0;
}