#include <stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,area;
    printf("enter the a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the traiangle area is:%f",area);
    
}