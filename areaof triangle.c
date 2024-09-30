#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,area;
    printf("Enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is %f",area);
}
