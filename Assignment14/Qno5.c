/*
Qno5:- Write a program to find the smallest
number stored in an array of size 10. Take
array values from the user.
*/

#include<stdio.h>
int main()
{
    int a[10], i;
    float min=9999999999999;
    printf("Enter the any 10 number ");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }

    printf("%f is the smallest number",min);
    printf("\n");
    return 0;
    
    
}