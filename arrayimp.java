import java.io.*;
import java.util.*;
public class arrayimp{
    int insert(int n,int a[])
    {
        int i;
        System.out.println("\nEnter the position for the value in the array");
        Scanner m = new Scanner(System.in);
        int pos=m.nextInt();
        System.out.println("\nEnter the value for the element in the array");
        int val=m.nextInt();
        for(i=n-1;i>=pos-1;i--)
        {
        a[i+1]=a[i];
        }
        a[pos-1]=val;
        n=n+1;
        for(i=0;i<n;i++)
        {
            System.out.println("\t"+a[i]);
        }
        return 0;
    }
    int delete(int n,int a[])
    {
        int i;
        System.out.println("\nEnter the position of the element to delete");
        Scanner f = new Scanner(System.in);
        int pos=f.nextInt();
        for(i=pos-1;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        for(i=0;i<n;i++)
        {
            System.out.println("\t"+a[i]);
        }
        return 0;
    }
    int array()
    {
        int i;
        int a[]=new int[10];
        System.out.println("\nEnter the size of the array");
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        System.out.println("\nEnter the element in the array");
        for(i=0;i<n;i++)
        {
            a[i]=s.nextInt();
        }
        insert(n,a);
        delete(n,a);
        return 0;
    }
    public static void main(String args[])
    {
        arrayimp obj = new arrayimp();
        obj.array();
    }
}
