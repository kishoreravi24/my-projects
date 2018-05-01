#include<stdio.h>
#include<stdlib.h>
int insert(int a[],int n)
{
    int pos,val,i;
    printf("\nEnter the position to insert");
    scanf("%d",&pos);
    printf("\nEnter the value to insert in the position:");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
        a[pos]=val;
        n=n+1;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
int delete(int a[],int n)
{
    printf("\nDelete");
    int i,pos;
    printf("\nEnter the posiition to delete the value");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    a[i]=a[i+1];
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
int main()
{
    int a[10],n,i,choice;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("\nEnter the elements to insert in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nchoose anyone");
    printf("\n1.insert\n2.delete\n3.exit");
    scanf("%d",&choice);
    do{
        switch(choice)
        {
            case 1:
            {
                insert(a,n);
                break;
            }
            case 2:
            {
                delete(a,n);
                break;
            }
            case 3:
            {
                printf("\nExit port");
                return 0;
                
            }
            default:
            {
                printf("\nChoose one");
            }
        }
    }
    while(choice!=4);
    return 0;
}