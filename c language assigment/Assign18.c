#include<stdio.h>
/*  *    
   ***   
  *****  
 ******* 
*********
*/
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*
*******  
 *****   
  ***     
   */
  int main()
  {
      int i,j;
      for(i=1;i<=5;i++)
      {
          for(j=1;j<=9;j++)
          {
              if(j>=8-8+i&&j<=8-i)
              printf("*");
              else
              printf(" ");
          }
          printf("\n");
      }
      return 0;
  }
/*.problem 3.
   * 
  * * 
 * * * 
* * * * 
*/
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j>=5-i)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
