/*Write a C program to input number from user and
check number is palindrome or not
using loop.
Input any number: 121
Output
121 palindrome
*/
#include<stdio.h>//
int main()
{
    int i,num,r,temp,sum=0;//all variable declearation
    printf("Input any number:");//print data
    scanf("%d",&num);//scanning number
    temp=num;
    while(temp!=0)//condition cheak
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("%d is a palindrome.",num);
    }
    else
    {
        printf("%d is not palindrome.",num);
    }
    return 0;
}