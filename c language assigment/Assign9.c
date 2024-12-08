
#include <stdio.h>
/* 1. write a program to takes the cost price and selling price of a produc from
 the user now calculate and print profit or loss percentage*/
int m1()
{
   float cp, sp, p, l;
   printf("Enter cost price:\t ");
   scanf("%f", &cp);
   printf("Enter selling price:\t");
   scanf("%f", &sp);
   if (sp >= cp)
   {
      p = (sp - cp) / cp * 100;
      printf("profit: %2.0f %%", p);
   }
   else
   {
      l = (cp - sp) / cp * 100;
      printf("loss: %2.0f %%", l);
   }
   return 0;
}
/* 2.write a program to take marks of 5 from the user assume marks are given out of 100 and passing marks
 is 33 now display whether the candidate passed the examination or failed.*/
int m2()
{
   int Math, English, Hindi, since, social_since;
   printf("Enter All Subjects Marks:\n");
   printf("Mathamatics:\t");
   scanf("%d", &Math);
   printf("English:\t");
   scanf("%d", &English);
   printf("Hindi:\t");
   scanf("%d", &Hindi);
   printf("Since:\t");
   scanf("%d", &since);
   printf("Social_since:\t");
   scanf("%d", &social_since);
   if (Math >= 33 && English >= 33 && Hindi >= 33 && since >= 33 && social_since >= 33)
   {
      printf("pass");
   }
   else
   {
      printf("fail");
   }
   return 0;
}

// write a program to check wheter a given alphabet is in upperccase or lowercase.
int m3()
{
   char c;
   printf("Enter your character :\n");
   scanf("%c", &c);
   if (c >= 'a' && c <= 'z')
   {
      printf("%c is a lowercase:", c);
   }
   else if (c >= 'A' && c <= 'Z')
   {
      printf("%c is a Upercase:", c);
   }
   else
   {
      printf("%c is a special character", c);
   }
   return 0;
}

/*Write a program to check a given number is divisible by 3 and divisible by 2.*/
int m4()
{
   int x;
   printf("Enter your number:\n");
   scanf("%d", &x);
   if (x % 2 == 0 && x % 3 == 0)
   {
      printf("%d is divisible", x);
   }
   else
   {
      printf("%d is not divisible", x);
   }
   return 0;
}
/*write a program to check whether a given number is divisible by 7 or divisible by 3*/
int main(){
   int z;
   printf("Enter your numbers:\n");
   scanf("%d",&z);
   if(z%7==0||z%3==0)
   {
       printf("%d is Divisible by 7 or 3 :",z);
   }
   else
   {
      printf("%d Not Divisible by 7 or 3:",z);
   }
   return 0;
}
