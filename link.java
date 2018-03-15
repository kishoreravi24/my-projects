import java.util.*;
import java.io.*;
class Array{
    private int Size;
    private int[] array;
    public Array(int[] arraycopy)
    {
        array=arraycopy;
    }
    public int Size(int n)
    {
        Size=n;
    }
    public int[] getvalue()
    {
        return array;
    }
    public int Sizevalue()
    {
        return Size;
    }
}
public class link{
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        Array obj = new Array();
        int i;
        System.out.println("Enter the size of the array");
        int n = scan.nextInt();
        obj.size(n);
        int[] array = new int[10];
        for(i=0;i<n;i++)
        {
            array[i]=scan.nextInt();
        }
        Array obj1 = new Array(array);
        obj1.getvalue();
        array=null;
        for(int j: array)
        {
            System.out.println(j);
        }

    }
}