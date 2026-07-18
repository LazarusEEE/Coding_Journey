#include<stdio.h>
 int main()
{ 
   
    int num, num2, num3 = 0, num4;
    printf("Input a number:");
    scanf("%d",&num);
    for(num4 = num; num!=0; num = num/10)
    {
        num2 = num % 10;
        num3 = num3+(num2*num2*num2);
    }
    if(num3==num4)
    {
        printf("%d is an armstrong number.\n",num4);
    }
    else
    {
        printf("%d is not an armstrong.\n",num4);
    }
    return 0;
}