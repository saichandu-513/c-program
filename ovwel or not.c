#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':printf("%c is a vowel",ch);
        break;
        default:printf("Enter correct vowels");
        break;
    }
}
