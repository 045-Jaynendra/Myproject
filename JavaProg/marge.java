//Program to merge two array.
//===========================
import java.util.*;
class marge
{
  public static void main(String arg[])
  {
    int arr1[],arr2[],arr3[],a,b,c,i,j=0;
    Scanner sc=new Scanner(System.in);
    System.out.print("How many element you want to enter for first array: ");
    a=sc.nextInt();
    arr1=new int[a];
    System.out.println("Enter "+a+" elements of first array: ");
    for(i=0;i<a;i++)
    {
      arr1[i]=sc.nextInt();
    }
    System.out.print("How many element you want to enter for second array: ");
    b=sc.nextInt();
    arr2=new int[b];
    System.out.println("Enter "+a+" elements of second array: ");
    for(i=0;i<b;i++)
    {
      arr2[i]=sc.nextInt();
    }
    System.out.println("\n\nElements of First array are............");
    for(i=0;i<a;i++)
    {
      System.out.print(arr1[i]+"\t");
    }
    System.out.println("\n\nElements of Second array are............");
    for(i=0;i<b;i++)
    {
      System.out.print(arr2[i]+"\t");
    }
    c=a+b;
    arr3=new int[c];
    for(i=0;i<a;i++)
    {
      arr3[i]=arr1[i];
    }
    for(i=a;i<c;i++)
    {
      arr3[i]=arr2[j];
      j++;
    }
    System.out.println("\n\nMerged array are............");
    for(i=0;i<c;i++)
    {
      System.out.print(arr3[i]+"\t");
    }
  }
}