#include <stdio.h>
/*problem 1.
 *    
 * *   
 * * *  
 * * * * 
 * * * * *
*/
int m1()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++) 
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*problem.2
         *
       * *
     * * *
   * * * *
 * * * * */

int m2()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= 6 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/*problem.3
 * * * * *
 * * * * 
 * * *  
 * *   
 *    
*/
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
                printf(" *");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*problem.4
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
*/
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=1;j--)
        {
            if(j<=6-i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
/*problem.5
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
*/
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        int num=1;
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf(" %d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
/* problem.6
 1
 2 1
 3 2 1
 4 3 2 1
 5 4 3 2 1*/

 int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        int num=i;
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf(" %d",num);
            num--;
        }
        printf("\n");
    }
    return 0;
}
/*problem.7
A B C D E 
  B C D E 
    C D E 
      D E 
        E 
*/
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        char x='A';
        for(j=5;j>=1;j--)
        {
            if(j<=i)
            printf("%c ",x);
            else
            printf("  ");
            x++;
        }
        printf("\n");
    }
    return 0;
}
/*problem.10
     *    
         *        
       * * *      
     * * * * *    
   * * * * * * *  
 * * * * * * * * *
*/
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
