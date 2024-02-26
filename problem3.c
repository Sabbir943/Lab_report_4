/*Write a program in C to display n terms of natural 
numbers and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
*/
#include<stdio.h>//stardard input output headerfile
int main()//main statrt
{
    int sum=0,i,n;//declearation sum,nmuber of index
    printf("Enter n:");//Enter any number
    scanf("%d",&n);//scanning number
    printf("The first %d natural number is :\n",n);
    for(i=1;i<=n;i++)//condition
    {
        printf("%d ",i);//print 1 to 7 number
        sum=sum+i;//law of sum
    }
    printf("\nThe Sum of Natural Number upto %d terms :%d\n\n",n,sum);
    return 0;
}