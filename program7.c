#include<stdio.h>
int main()
{
    int a = 0,b = 0,c = 0,ans = 0,x = 0;

    printf("\nEnter the value of a : ");
    scanf("%d",&a);
    printf("\nEnter the value of b : ");
    scanf("%d",&b);
    printf("\nEnter the value of c : ");
    scanf("%d",&c);
    printf("\nEnter the value of x : ");
    scanf("%d",&x);

    ans = a*(x*2)+b*x+c;

    printf("\nAns is : %d\n",ans);

    return 0;
}