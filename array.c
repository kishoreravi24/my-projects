#include<stdio.h>
int main()
{
    int i,pos,val,n,arr[20],c,pos1,n2,n3,temp,count;
    printf("enter the size of the array\n");                            //If you have read the values then what is the point of 
    scanf("%d",&n);                                                     //  insert() ??
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("enter the position to insert the value in the array\n");    //This is not how menu driver is supposed to be!!!
    scanf("%d",&pos);                                                   // I should choose which operation to do not you!
    printf("enter the value to insert in the array\n");
    scanf("%d",&val);
    for(c=n-1;c>=pos-1;c--)                                             //I want each feature as a seperate function!!!
    
        arr[c+1]=arr[c];
        arr[pos-1]=val;
    
    for(i=0;i<=n;i++)
        printf("%d",arr[i]);
    printf("the insertion over\n ");
    printf("Deletion\n");
    printf("enter the position to delete");
    scanf("%d",&pos1);
    if(pos1>=n+1)
    printf("Delete");
    else
        for(c=pos1-1;c<n-1;c++)
        arr[c]=arr[c+1];

    printf("Deletion value");
    for(i=0;i<n-1;i++)
    printf("%d",arr[i]);
    printf("Appending\n");
    printf("enter the value to append\n");
    scanf("%d",&n2);
    for(i=n;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=n2;
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    printf("Array rotation");
    printf("rotations");
    scanf("%d",&count);
    temp=arr[0];
    for(i=0;i<n-1;i++){
    arr[i]=arr[i+1];
    }
    arr[i]=temp;
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
return 0;
}

/*****************************************************************************************/
/* 1. Understand what a menu driver is. Confirm the requirements before you can write a  */
/*      single line of code!!!!                                                          */
/* 2. Features should be developed as seperate functions, then how am I supposed to      */
/*      perform the operations multiple times?                                           */
/* 3. Structure your code with proper indentation!!!                                     */
/*****************************************************************************************/
