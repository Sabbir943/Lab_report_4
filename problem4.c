/*Write a C program that takes a positive integer
 from the user and computes the factorial
using for loop.
Enter an integer: 10
Factorial of 10 = 3628800
*/
#include<stdio.h>
int main()
{
  int i,fact=1,n;
  printf("Enter an integer:");
  scanf("%d",&n);
  printf("Factorial of %d:",n);
  for(i=1;i<=n;i++)
    fact=fact*i;

    printf("%d",fact);

  return 0;


}
