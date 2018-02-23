#include<iostream.h>
class Arr_select_sort{
public:
int arr[20],i,j,n,pos,val,temp;
void print()
{
cout<<"enter the size of the array";
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
}

cout<<"enter the position to insert the array";
cin>>pos;
cout<<"enter the value to be insert in the array";
cin>>val;
cout<<"the real insertion begins..";
for(j=n-1;j>=pos-1;j--)
{
arr[j+1]=arr[j];
arr[pos-1]=arr[val];
}
for(i=0;i<n;i++)
{
cout<<arr[i];
}
cout<<"sort";
cout<<arr[i];
cout<<"selection sort";
for(i=0;i<=n-1;i++)
{
for(j=m+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
cout<<arr[i];
}
};
};

