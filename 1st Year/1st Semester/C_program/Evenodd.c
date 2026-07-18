#include<stdio.h>
int main()//ternary condion
{
int num;
printf("Enter number:");
scanf("%d",&num);
num%2 == 0 ? printf("this_is_even_number") : printf("this_is_odd_number");
 return 0;
}