// 3. Write a program to swap values of two int variables

// Date-> 11/10/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter a value to x: ");
    scanf("%d",&x);
    printf("enter a value to y: ");
    scanf("%d",&y);

    printf("befor swaping value---\nx = %d\ny = %d\n\n",x,y);
    z = x;
    x = y;
    y = z;

    printf("after swaping value---\nx = %d\ny = %d",x,y);

    return 0;
}