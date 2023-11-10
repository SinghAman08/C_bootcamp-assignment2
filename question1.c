// 1. Write a program to print unit digit of a given number

// Date-> 11/10/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{

    int x;
    int result;
    printf("Enter a number: ");
    scanf("%d",&x);

    result = x % 10;
    printf("Unite digit of %d is %d\n",x,result);
    return 0;
}