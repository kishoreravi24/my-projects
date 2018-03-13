import java.util.*;
 class A{
    private int n=5;
    private int a[]=new int[10];
    public int array(int i)
    {
        Scanner s = new Scanner(System.in);
        for(i=0;i<n;i++)
        {
            a[i]=s.nextInt();
        }
    return a[i];
    }
    public int print()
    {
        return n;
    }
}
public class all{
    public static void main(String args[])
    {
    A obj = new A();
        System.out.println(obj.print());
        System.out.println(obj.array());
    }
}