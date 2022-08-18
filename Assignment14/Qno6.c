/*
Qno6:- Write a program to to sort element of an array
of size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
{
    int n, i, j,temp;
    
    int a[10];
    printf("Enter the any n number ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    for ( i = 0; i <= 10-1; i++)
    {
        for(j=i+1; j< 10; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0; 
}