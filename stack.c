#include<stdio.h>
#include<stdlib.h>
int a[100],choice,n,i,x,top;
void push(void);
void pop(void);
void display(void);
int main()
{
    printf("\nEnter the size of the array for the stack operation:");
    scanf("%d",&n);
    printf("\nStack operation");
    printf("\n------------------");
    printf("\n1.push\n2.pop\n3.display\n4.exit");
    do
    {
        printf("\nchoose any one");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nExit port");
                return 0;
            }
            default:
            {
                printf("\nchoose");
            }
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\nstack is overflowed");
    }
    else
    {
        printf("\nEnter the value for push");
        scanf("%d",&x);
        top++;
        a[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nStack is overflowed");
    }
    else{
        printf("\nPOP%d",a[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
    printf("\ndisplay");
    for(i=top;i>=0;i--)
    printf("%d",a[i]);
    }
    else{
        printf("\nstack is empty");
    }

}