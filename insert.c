#include<stdio.h>
int main()
{
    int a[20],i,j,n=5,t;
    printf("enter the elementd to be inserted");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
    t = a[i];
    j = i-1;
    while(j >=0 && a[j]>t)
    {
        a[j+1] = a[j];
        j=j-1;
    }
    a[j+1]=t;
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}