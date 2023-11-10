// 5. Write a program to input a three digit number and display the sum of the digits.

// Date-> 11/10/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    int x, var1, var2, sum = 0;

    printf("Enter three digit number: ");
    scanf("%d", &x);

    var1 = x % 10;
    x /= 10;
    var2 = x % 10;
    x /= 10;

    sum = var1 + var2 + x;
    printf("Sum = %d\n", sum);
    return 0;
}
