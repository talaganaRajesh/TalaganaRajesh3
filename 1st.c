#include<stdio.h>

void gcd(int a, int b);

void main()
{  
   int n1,n2;
   printf("enter the two numbers : \n");
   scanf("%d%d",&n1,&n2);
   gcd(n1,n2);
}

void gcd(int a,int b)
{
   int sm;
   sm=(a<b)?a:b;

   while ((a%sm==0)&&(b%sm==0)) 
   {
     sm--;
   }

   printf("the gcd of %d and %d is = %d",a,b,sm);

}