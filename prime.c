#include<stdio.h>
#include<stdbool.h>
int prime(int n)
{
int i;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
return false;
}
return true;
}
return 0;
}
int main()
{
int n;
printf("enter the number bro");
scanf("%d",&n);
if(prime(n))
{
printf("correct");
}
else
{
printf("tappu");
}
return 0;
}


