/*Write a program to find sum of n natural number using for loop.*/
#include <stdio.h>

int main()
{
    int n , i, sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum + i;
    }
    printf("the sum of first n natural numbers is %d\n", sum);
    return 0;

}