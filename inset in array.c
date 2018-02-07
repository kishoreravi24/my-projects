#include<stdio.h>
int main()
{
int array[20],c,n,val,pos;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the elements");
for(c =0;c<n;c++)
scanf("%d",&array[c]);

printf("enter the position to insert the value in the array");
scanf("%d",&pos);
printf("enter the value to insert");
scanf("%d",&val);
for(c=n-1;c>=pos-1;c--)
array[c+1]=array[c];
array[pos-1]=val;

for(c=0;c<=n;c++)
printf("%d\n",array[c]);
return 0;

}
