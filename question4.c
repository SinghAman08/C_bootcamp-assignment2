// 4. Write a program to swap values of two int variables without using a third variable.

// Date-> 11/10/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{

    int x,y;
    printf("Enter value to x: ");
    scanf("%d",&x);
    printf("Enter value to y: ");
    scanf("%d",&y);

    printf("\nbefor swaping value---\nx = %d\ny = %d\n",x,y);
    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nafter swaping value---\nx = %d\ny = %d",x,y);

    return 0;
}
