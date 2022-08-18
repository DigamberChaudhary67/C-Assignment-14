/*
Qno3:- Write a program to calculate the sum of
all even numbers and sum of all odd numbers,
which are stored in an array of size 10. Take
array values from the user.
*/
#include<stdio.h>
int main()
{
    int clc[10], i, se=0, so=0;
    printf("Enter the any 10 number for an array ");
    for ( i = 0; i <= 9; i++)
    {
        scanf("%d", &clc[i]);
    }
    for ( i = 0; i <= 9; i++)
    {
        if (clc[i]%2 == 0)
        {
            se = se + clc[i];
        }
        else
        {
            so = so + clc[i];
        }
        
    }
    printf("The sum of all even number is %d\n", se);
    printf("The sum of all odd number is %d\n", so);
    return 0;
    
    
    
}