#include<stdio.h>
int main()
{
    int a[20],i,j=0,t[10],count,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements to be inserted in array");
    for(i=0;i<n;i++)
    {
        printf("a[%d]\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the count");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    t[i] = a[i];
    for(i=count;i<n;i++)
    {
        a[i-count] = a[i];
    }
    for(i=count+1;i<n;i++)
    {
        a[i] = t[j];
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}