#include<stdio.h>
int s1(){
    // 1. Write a program to check whether a given number is a three digit number or not .
    int x;
    // [ EXP: 123/1 output : = 1 ]  [123/10  output: = 12] [123/100 output: 123]  [123/1000 output: 1234] 
    printf("Enter your numbers : ");
    scanf("%d",&x);
    if (x/1000){  // [ EXP: 123/1000 output : = 1234 ] 1.first condition is [false]
        printf(" not three digit ");
    }
    else if(x/100){ // [123/100  output: = 123]  2. second conditon is [ true ]
        printf("Yes number is three digit ");
        
    }
    else if(x/10) {  //[ EXP: 123/10 output : = 12 ] 3. third conditon is [false]
       printf(" not three digit ");
    }
    else if(x/1){ //[ EXP: 123/1 output : = 1 ] 4. fourth conditon is [false]
            printf(" not three digit");
    }
    return 0;
} 

// 2. write  a program to print greater between two number  print one number it both are the same .
int s2()
{
    int x=10;
    int y=20;
    printf("Enter x and y value \n");
    scanf("%d%d",&x,&y);
    if(x>y){  
        printf("%d is grater",x,y);
    }
    else if (y>x){
        printf("%d is grater",y,x);
    }
    if(x==y){
        printf(" Both are same");
    }
    return 0;
}
/* 3. Write a program to chek whether roots of a given quadratic equation are real
  distinct real & equal or imaginary roots*/
  int s3()
  {
    int a,b,c;
    int x,y,z;
    printf("Enter your roots:  \n ");
    scanf("%d%d%d",&a,&b,&c);
    if(x=b*b-4*a*c==0){
        printf("Real and equal :");
    }
    else if(y=b*b-4*a*c>0){
        printf("real and distinct");
    }
 else if(z=b*b-4*a*c<0){
        printf("equal or imaginary");
    }
return 0;
  }
  //4. write a  program to check whether a given year is leep year or not.
  int s4()
  {
    int x;
    printf("Enter years\n");
    scanf("%d",&x);
    if((x%4==0)&&(x%100!=0||x%400==0)){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
    return 0;
  }
//4. write a  program to check whether a given year is leep year or not.
 int main(){
int year;
printf("Enter your year:\n");
scanf("%d",&year);
  if(year%100==0){
      if(year%400==0)
          printf("%d:  year is leap year",year);
    else
         printf("%d:  not a leap year",year);
}
   else{
      if(year%4==0)
        printf("%d:  year is a leap year",year);
  else
        printf("%d :   not a leap year",year);
}
return 0;
}

//
int s6()
{
    int a,b;
    printf("Enter a two Number :");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("a is big ");
    else if(b>a)
            printf("b is big");
         else
            printf("both are same");

}

  /*write a program to find the gretest among three given numbers. print number.
   once if the the gretest number appears two or theee times*/

int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(b<a)||(b>c)){
printf("%d",a,b,c);
    }
    else if((a>b)&&(a<b)||(a<c)){
        printf("%d",a,b,c);
    }
    else if (a==b==c)
    {
    printf("%d",a,b,c);
    }
    
return 0;

}

