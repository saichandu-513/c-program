#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("Enter values a&b and operand");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+':printf("The addition is %d",a+b);
        break;
        case '-':printf("The subtraction is %d",a-b);
        break;
        case '*':printf("The multiplication is %d",a*b);
        break;
        case '/':printf("The divison is %d",a/b);
        break;
        case '%':printf("The remainder is %d",a%b);
        break;
        default:printf("Given input properly");
        break;
    }
}
