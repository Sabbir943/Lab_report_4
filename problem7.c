/*Write a program in C to display the cube of the
 number up to an integer.

Test Data :
Input number of terms : 5
Expected Output :
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
Number is : 4 and cube of the 4 is :64
Number is : 5 and cube of the 5 is :125
*/
#include<stdio.h>//header file
int main()
{
    int n,i;//initialization i and n
    printf("Input number of terms :");//print someting
    scanf("%d",&n);//scanning number
    for(i=1;i<=n;i++)//condition
    {
        printf("Number is : %d and cube of the %d is :%d\n",i,i,(i*i*i));
    }
    return 0;
}