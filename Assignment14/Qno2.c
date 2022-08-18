/*
Qno2:- Write a program to calcute the average of number stored
in an array of size 10. Take array values from thr user.
*/

#include<stdio.h>
int main()
{
    int av[10], i, sum=0;
    float average=0;
    printf("Enter the any 10 number ");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d", &av[i]);
        sum = sum + av[i];
    }
    average = sum / 10.0;
    printf("The average of given 10 number is %f", average);
    return 0;
    
}