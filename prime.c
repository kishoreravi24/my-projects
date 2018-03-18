#include<stdio.h>
int prime(int n)
{
int i,count=0;
/* i vandu one bcz prime number epaiyum 1 ala mattum dan divisible agum*/
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("%dcorrect",n);
}
else
{
printf("%dtappu",n);
}
return 0;
}
int main()
{
int n;
printf("enter the number bro");
scanf("%d",&n);
int res= prime(n);
return 0;
}
//tapu irunda ping me bro mrng pakuran..Gud nyt.

