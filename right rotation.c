#include<stdio.h>
int main()
{
    int arr[20],i,n=5,temp;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
   temp = arr[n-1];
    for(i=n;i>0;i--)
    {
        arr[i] = arr[i-1];
        
    }
    arr[0] = temp;
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
}