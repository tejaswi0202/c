#include<stdio.h>
void main()
{
    int a,rem;
    printf("enter value of a:");
    scanf("%d",&a);
    if(a%2==0)
    {
        rem=0;
    }
    else
    {
        rem=1;
    }
    switch(rem)
    {
        case 0:printf("even");
        break;
        case 1:printf("odd");
        break;
        default:printf("%d is Invalid ",a);
        break;

    }
}
