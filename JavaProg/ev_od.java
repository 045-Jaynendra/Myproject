//Program to display evan and odd elements from array elements.
//=============================================================
import java.util.*;
class ev_od
{
  public static void main(String arg[])
  {
    int arr[],a,i;
    Scanner sc=new Scanner(System.in);
    System.out.print("How many element you want to enter: ");
    a=sc.nextInt();
    arr=new int[a];
    System.out.println("Enter "+a+" elements of an array: ");
    for(i=0;i<a;i++)
    {
      arr[i]=sc.nextInt();
    }
    System.out.println("\n\nEven Elements of an array are.................");
    for(i=0;i<a;i++)
    {
      if(arr[i]%2==0)
      {
	System.out.print(arr[i]+"\t");
      }
    }
    System.out.println("\n\nOdd Elements of an array are.................");
    for(i=0;i<a;i++)
    {
      if(arr[i]%2!=0)
      {
	System.out.print(arr[i]+"\t");
      }
    }
  }
}