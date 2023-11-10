/*11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.*/

// Date-> 11/10/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{
    float INR,inrTOusd;
    printf("Please Enter your amount in (INR): ");
    scanf("%f",&INR);

    inrTOusd = INR / 76.23;
    printf("%.2f",inrTOusd);

    return 0;
}