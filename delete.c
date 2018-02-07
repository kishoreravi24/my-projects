#include<stdio.h>
int main()
{
int array[50],pos,c,n;
printf("enter the size of the array");
scanf("%d",&n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("enter the position to insert he value");
scanf("%d",&pos);
if(pos>=n+1)
printf("hello");
else{
for(c=pos-1;c<n-1;c++)
array[c]=array[c+1];
for(c=0;c<n-1;c++)
printf("%d\n",array[c]);
}
return 0;
}

