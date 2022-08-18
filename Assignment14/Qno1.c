/*
Qno1:-Write a program to calculate the sum of 
number stored in an array of size 10. Take array
values from the user.
*/

#include<stdio.h>
int main()
{
    int s[10],i,sum=0;
    printf("Enter the any number ");
    for ( i = 0; i<=9; i++)
    {

        scanf("%d", &s[i]);
        sum = sum + s[i];
    }
    printf("The sum of 10 given number is %d", sum);
    return 0;
}