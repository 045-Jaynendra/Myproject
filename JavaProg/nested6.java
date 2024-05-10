import java.util.*;
class nested6
{
  public static void main(String str[])
  {
    int a,i,j,k,l=0,m=0;
    Scanner sc=new Scanner(System.in);
    System.out.print("How many line u want to print: ");
    a=sc.nextInt();
    for(i=0;i<=a;i++)
    {
      for(j=i;j<=a;j++)
      {
	System.out.print(" ");
      }
      for(k=l;k>=1;k--)
      {
	System.out.print("*");
      }
      System.out.print("\n");
      l=(i*2)+1;
      m++;
    }
  }
}