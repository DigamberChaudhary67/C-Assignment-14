/*
Qno4:- Write a program to find the
greatest number stored in an array of
size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int number[10], i, max=-999999;
    printf("Enter the any 10 number ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if (max<=number[i])
        {
            max=number[i];
        }
        
    }
    printf("%d is a greatest number ", max);
    
    


    printf("\n");
    return 0;
}