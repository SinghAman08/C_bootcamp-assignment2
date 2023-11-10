/*10. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

// Date-> 11/10/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{
    int num,digit;
    int result;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("Enter a digit: ");
    scanf("%d",&digit);

    result = (num * 10) + digit;

    printf("Result = %d\n",result);

    return 0;
}