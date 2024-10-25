#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
if(d>0)
{
    printf("The roots are Real & Distnict\n");
    r1=-b+sqrt((d)/(2*a));
    r2=-b-sqrt((d)/(2*a));
    printf(" Enter r1=%f and r2=%f  :",r1,r2);
}
else if(d<0)
{
    printf("The roots are Real & Imaginary");
}
else
{
    printf("The roots are Real & Equal");
    r1=r2=-b/(2*a);
    printf("r1 and r2 values are %f%f",r1,r2);
}
}
