

import java.util.*;
public class arr {
  public static void main(String args[]) {
	  int a[]= new int[10];
	  int i,pos,val,pos1;
	  Scanner s = new Scanner(System.in);
	  System.out.println("enter the size of the array");
	  int n = s.nextInt();
	  System.out.println("enter the elmenets to be inserted");
	  for(i=0;i<n;i++)
	  {
		a[i]=s.nextInt();  
	  }
	  System.out.println("enter the position to insert the value");
	  pos = s.nextInt();
	  System.out.println("enter the value to insert");
	  val = s.nextInt();
	  for(i=n-1;i>=pos-1;i--)
	  {
		  a[i+1]=a[i];
		  a[pos-1]=val;
	  }
	  n=n+1;
	  System.out.println("the values are");
	  for(i=0;i<n;i++)
	  {
		  System.out.println(a[i]);
	  }
	  System.out.println("enter the position to delete the number");
	  pos1 = s.nextInt();
	  for(i=pos1;i<n-1;i++)
	  {
		  a[i]=a[i+1];
	  }
	  n=n-1;
	  System.out.println("the values are");
	  for(i=0;i<n;i++)
	  {
		  System.out.println(a[i]);
	  }
  }
}

