// 2. Write a program to print a given number without its last digit.

// Date-> 11/10/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{
    int x;
    int result;
    printf("Enter a number: ");
    scanf("%d",&x);

    result = x / 10;
    printf("without last digit number = %d",result);

    return 0;
}