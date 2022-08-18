/*
Qno8:- Write a program to find the second smallest number in
an array. Take array values from the user.
*/

#include<stdio.h>
int main()
{
    int number[20], n, i, j, temp;
    printf("Enter the any N number ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if (number[i] > number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
            
        }
        
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", number[i]);    
    }

    printf("\n");

    printf("The second smallest number is %d", number[1]);

    return 0;
    
    
    
    
}