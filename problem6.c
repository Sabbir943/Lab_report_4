/*Write a C program to input a number from user and
 count number of digits in the given
integer using loop
Input num: 35419
Output
Number of digits: 5
*/
#include<stdio.h>
int main()
{
      
    int i,count=0,number;
    printf("Enter any number");
    scanf("%d",&number);
    do{
        count++;
        number=number/10;
    }
    while(number!=0);
    printf("Number of digits:%d\n",count);
    return 0;

      
}