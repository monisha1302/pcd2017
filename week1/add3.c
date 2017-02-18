#include <stdio.h>
int add(int a, int b, int c)
{
   return a+b+c;
}
void main()
{
int sum;
sum=add(2, 3, 5);
printf("sum is %d\n", sum);
}
