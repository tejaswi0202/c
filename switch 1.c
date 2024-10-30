#include<stdio.h>
void main()
{
    int a,b;
    char opr;
    printf("enter a and b values:");
    scanf("%d%d %c",&a,&b,&opr);
    switch(opr)
    {
        case'+':printf("the addition is",a+b );
        break;
        case'-':printf("the subtraction is",a-b );
        break;
        case'*':printf("the subtraction is",a*b );
        break;
        case'/':printf("the division is",a/b );
        break;
        case'%':printf("the remainder is",a%b );
        break;
        default:printf("Invalid operator");
        break;
    }
}
