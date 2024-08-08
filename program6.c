#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0,b = 0,c = 0,ans = 0;

    printf("\nEnter the value of a : ");
    scanf("%d",&a);
    printf("\nEnter the value of b : ");
    scanf("%d",&b);
    printf("\nEnter the value of c : ");
    scanf("%d",&c);

    ans = -b +- sqrt(b*2-4*a*c)/2*a;

    printf("\n ans is : %d",ans);

    return 0;
}