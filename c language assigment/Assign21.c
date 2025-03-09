
// 1.write a function to calculate the area a circle(TSRS)
float areaofcircle(float r)
{
    float x;
    x = 3.1416 * r * r;
    return x;
}
int main()
{
    float r, area;
    printf("Enter a radius:\t");
    scanf("%f", &r);
    area = areaofcircle(r);
    printf("area of circal is:%0.2f", area);
    return 0;
}

//2.write a function to calculate simple interest (TSRS)
int simpinterest(int p,int r,int t)
{
    int si;
    si=p*r*t/100;
    return si;
}
int main()
{
    int p,r,t,b;
    printf("How meny amount you given:\t");
    scanf("%d",&p);
    printf("Enter your rate:\t");
    scanf("%d",&r);
    printf("time:\t");
    scanf("%d",&t);
   b=simpinterest(p,r,t);
   printf("total simple interst is:%d",b);
   return 0;
}