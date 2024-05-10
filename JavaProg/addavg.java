//Program to find addition and average of array elements.
//=======================================================
import java.util.*;
class addavg
{
  public static void main(String arg[])
  {
    int arr[],a,b=0,i;
    float c;
    Scanner sc=new Scanner(System.in);
    System.out.print("How many element you want to enter: ");
    a=sc.nextInt();
    arr=new int[a];
    System.out.println("Enter "+a+" elements of an array: ");
    for(i=0;i<a;i++)
    {
      arr[i]=sc.nextInt();
    }
    System.out.println(a+" elements of an array are...........");
    for(i=0;i<a;i++)
    {
      System.out.print("\t"+arr[i]);
      b=b+arr[i];
    }
    c=b/a;
    System.out.println("\nSum: "+b);
    System.out.print("Average: "+c);
  }
}