/*10. Write a program in C to display a pattern like 
a right angle triangle using an asterisk.
*
**
***
****
*/
#include<stdio.h>//input output headerfile
int main()//main function started
{
    int row,col,n;//declear all variable
    printf("Enter n:");
    scanf("%d",&n);//scanning number
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
           printf("\n");
    }
    return 0;
}