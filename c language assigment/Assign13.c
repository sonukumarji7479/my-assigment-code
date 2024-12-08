#include <stdio.h>
// 1. write a c program to calculate sum of first N naural numbers.
int main()
{
  int n, i,s;
  printf("Enter a numbers:\t");
  scanf("%d", &n);
  for (i=1,s=0;i<=n;i++)
      s = s + i;
  printf("sum is = %d", s);
  return 0;
}
// 2.write a program to calculate sum of first N even Numbers.
int main()
{
  int n, i, s;
  printf("Enter a numbers:\t");
  scanf("%d", &n);
  for (i=1,s=0;i<=n;i++)
    if (i % 2 == 0)
      s = s + i;
  printf("sum is %d", s);
  return 0;
}
// 3.write a program to calculate sum of first N odd Numbers.
int main()
{
  int n, i, s;
  printf("Enter a number:\t");
  scanf("%d", &n);
  for (i=1,s=0;i<=n;i++)
  {
    if (i % 2 == 1)
      s = s + i;
  }
  printf("sum odd number is : %d", s);
  return 0;
}
// 4.write a program to claculate sum of squares of first N natural Numbers.
int main()
{
  int n, i, s;
  printf("Enter a numbers:\t");
  scanf("%d", &n);
  for (i = 1, s = 0; i <= n; i++)
      s = s + i;
  printf("sum of squares is = %d", s*s);
  return 0;
}

// 5.write a program to calcualte sum of cubes of first N natural numbers.
int main()
{
  int n,i,s;
  printf("Enter a number:\t");
  scanf("%d",&n);
  for(i=1,s=0;i<=n;i++)
    s=s+i;
    printf("sum of cubes is: %d",s*s*s);
    return 0;
}