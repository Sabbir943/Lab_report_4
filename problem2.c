/*Write a C program to compute the sum of the first 10 natural
 numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/
#include<stdio.h>
int main()
{
    int i,sum=0;//sum and index declearation 
    printf("The first 10 natural nunber is:\n");//print something
    for(i=1;i<=10;i++)//condition
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nThe Sum is :%d\n",sum);
    return 0;
    
}