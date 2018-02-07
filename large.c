#include<stdio.h>
int main()
{
int n,c,arr[50],large;
printf("enter the size of the arr");
scanf("%d",&n);
for(c=0;c<n;c++)
scanf("%d",&arr[c]);
large=arr[1];
for(c=1;c<n;c++){
if(arr[c]>large)
{
large=arr[c];
}
}
printf("%d",large);
return 0;
}
