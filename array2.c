#include<stdio.h>
int main()
{
int Array_Insert(int arr[],int pos, int val )
{
int arr[50],n,pos,val;
printf("Enter the size of the array\n");
scanf("%d",&n);
//size of the array
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",arr[i]);
//elements stored in arr[i]
printf("Enter the position to insert the value\n");
scanf("%d",&pos);
printf("Enter the value to insert\n");
scanf("%d",&val);
//insertion 
printf("Insertion");
for(c=n-1;c>=pos-1;c--)
arr[c+1]=arr[c]
arr[pos-1]=val;
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}
return 0;
}

