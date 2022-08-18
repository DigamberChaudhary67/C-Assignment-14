/*
Qno9:- Write a program in C to read n number
of values in an array and display it in
reverse order. Take array values from the user.
*/

#include<stdio.h>
int main()
{
    int a[10], i, j, temp, n;
    printf("Enter the an N number ");
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
        for ( j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
    
    
    
    

}