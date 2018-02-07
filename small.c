#include<stdio.h>
int main()
{
int n,i,small,arr[50];
printf("enter the size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
small=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]<small){
small=arr[i];
}
printf("%d",small);
return 0;
}
}
