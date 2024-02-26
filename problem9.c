/*Write a program in C to input a number 
and check whether the number is prime number
or not using for loop.
Input any number: 17
Output
17 s prime number
*/
#include<stdio.h>
int main()
{
    int i,num,isprime=0;
    printf("Input any number:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            isprime=1;
            break;
        }
    }
    if(isprime==0)
    {
        printf("%d is a prime number.",num);
    }
    else{
        printf("%d is not a prime number.",num);
    }
    return 0;
}