//Program to find Smallest and Greatest value from the array.
//===========================================================
import java.util.*;
class smgr
{
  public static void main(String arg[])
  {
    int arr[],a,b,i;
    Scanner sc=new Scanner(System.in);
    System.out.print("How many element you want to enter: ");
    a=sc.nextInt();
    arr=new int[a];
    System.out.println("Enter "+a+" elements of an array: ");
    for(i=0;i<a;i++)
    {
      arr[i]=sc.nextInt();
    }
    System.out.println("Elements of an array are.................");
    for(i=0;i<a;i++)
    {
      System.out.print(arr[i]+"\t");
    }
    for(i=0;i<(a-1);i++)
    {
      if(arr[i]>arr[i+1])
      {
	b=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=b;
      }
    }
    System.out.println("\nGreatest value of array: "+arr[i]);
    for(i=0;i<(a-1);i++)
    {
      if(arr[i]<arr[i+1])
      {
	b=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=b;
      }
    }
    System.out.println("\nSmallest value of array: "+arr[i]);
  }
}