// 6. Write a program which takes a character as an input and displays its ASCII code.

// Date-> 11/10/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{
    char character;
    printf("enter a character\n");
    scanf("%c",&character);

    printf("ASCII code of %c is %d\n",character,character);    
    return 0;
}