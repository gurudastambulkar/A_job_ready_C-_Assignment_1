#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
    float A;
    printf("Enter radius of a circle");
    scanf("%d",&r);
    A=3.14*(r*r);
    printf("Area of circle is %f having the radius %d",A,r);
    return 0;
}
