import java.util.*;
 class A{                                               //class ArrayImplementation{
    private int n=5;                                    //    private int count; //Always give a meaningful name
    private int a[]=new int[10];                        //    private int[]array; 
    public int array(int i)                             //    public ArrayImplementation(int[]arrayCopy){
    {                                                   //       array = arrayCopy;
        Scanner s = new Scanner(System.in);             //       count= array.length;
        for(i=0;i<n;i++)                                //    }   //Never get inputs in any of the class' methods unless its unavoidable
        {                                               //    public int[]getArray(){    //Never Print stuff other than error messages
            a[i]=s.nextInt();                           //        return array;
        }                                               //    }
    return a[i];
    }
    public int print()                                  //    public static void main(String[]args){
    {                                                   //        int array[] = {1,2,3,4,5,6};
        return n;                                       //        ArrayImplementation obj = new ArrayImplementation(array);
    }                                                   //        array = null;    //just to make sure array is empty
}                                                       //        array = obj.getArray();
public class all{                                       //        for(int i: array){    //This is called for-each loop or extended for loop
    public static void main(String args[])              //            System.out.println(i);
    {                                                   //     }
    A obj = new A();                                    //}
        System.out.println(obj.print());
        System.out.println(obj.array());
    }
}                                                          
