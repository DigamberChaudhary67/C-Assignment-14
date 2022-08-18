/*
Qno7:- Write a program to find second largest in an array.
Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int a[10], n, i, j,temp;
    printf("Enter the any n number of array ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }
            
        }
        
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nThe Second greatest number is %d", a[n-2]);
    
    return 0;
    
}