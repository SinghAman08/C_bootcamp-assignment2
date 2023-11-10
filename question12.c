// 12. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

// Date-> 11/10/23 ,Author Name = Aman Singh

#include<stdio.h>
int main()
{

    int ori_num,rot_num;
    int var;
    printf("Enter a three digit number: ");
    scanf("%d",&ori_num);

    var = ori_num % 10;
    ori_num = ori_num / 10;
    var *= 100;
    rot_num = var + ori_num;

    printf("after rotated number will be %d\n",rot_num);
    return 0;
}
