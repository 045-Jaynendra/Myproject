//Program to arrange array elements in assending and descending.
//==============================================================
import java.util.*;
class asde
{
  public static void main(String arg[])
  {
    int arr[],a,b,i=0,j;
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
    System.out.println("Elements of an array are.................");
    for(i=0;i<a;i++)
    {
      System.out.print(arr[i]+"\t");
    }
    for(i=0;i<a;i++)
    {
      for(j=i+1;j<a;j++)
      {
        if(arr[i]>arr[j])
	{
	  b=arr[i];
	  arr[i]=arr[j];
	  arr[j]=b;
	}
      }
    }
    System.out.println("\n\nElements of an array in Assending order are.................");
    for(i=0;i<a;i++)
    {
      System.out.print(arr[i]+"\t");
    }
    System.out.println("\n\nElements of an array in Descending order are.................");
    for(i=a-1;i>=0;i--)
    {
      System.out.print(arr[i]+"\t");
    }
  }
}